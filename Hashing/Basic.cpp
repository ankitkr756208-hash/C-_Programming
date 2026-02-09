#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val) {
        this->key = key;
        this->val = val;
        next = NULL;
    }

    // Destructor
    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

class HashTable {
    int totsize;
    int currsize;
    Node** table;

    int hashFunction(string key) {
        int idx = 0;
        for (int i = 0; i < key.size(); i++) {
            idx = (idx + key[i] * key[i]) % totsize;
        }
        return idx;
    }

    void rehash() {
        Node** oldtable = table;
        int oldsize = totsize;

        totsize = 2 * totsize;
        table = new Node*[totsize];

        for (int i = 0; i < totsize; i++) {
            table[i] = NULL;
        }

        currsize = 0;

        // copy old data
        for (int i = 0; i < oldsize; i++) {
            Node* temp = oldtable[i];
            while (temp != NULL) {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if (oldtable[i] != NULL) {
                delete oldtable[i];
            }
        }
        delete[] oldtable;
    }

public:
    HashTable(int size = 5) {
        totsize = size;
        currsize = 0;
        table = new Node*[totsize];

        for (int i = 0; i < totsize; i++) {
            table[i] = NULL;
        }
    }

    void insert(string key, int val) {
        int idx = hashFunction(key);

        Node* newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode;

        currsize++;

        double lambda = currsize / (double)totsize;
        if (lambda > 1.0) {
            rehash();
        }
    }

    bool exists(string key) {
        int idx = hashFunction(key);
        Node* temp = table[idx];

        while (temp != NULL) {
            if (temp->key == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key) {
        int idx = hashFunction(key);
        Node* temp = table[idx];

        while (temp != NULL) {
            if (temp->key == key) {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }

    void removeKey(string key) {
        int idx = hashFunction(key);
        Node* temp = table[idx];
        Node* prev = NULL;

        while (temp != NULL) {
            if (temp->key == key) {
                if (prev == NULL) {
                    table[idx] = temp->next;
                } else {
                    prev->next = temp->next;
                }
                temp->next = NULL;
                delete temp;
                currsize--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    ~HashTable() {
        for (int i = 0; i < totsize; i++) {
            if (table[i] != NULL) {
                delete table[i];
            }
        }
        delete[] table;
    }
};

int main() {
    HashTable ht;

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("grape", 30);

    cout << "apple: " << ht.search("apple") << endl;
    cout << "banana exists? " << ht.exists("banana") << endl;

    ht.removeKey("banana");
    cout << "banana exists after delete? " << ht.exists("banana") << endl;

    return 0;
}
