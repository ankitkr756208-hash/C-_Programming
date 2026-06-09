#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> child;
    bool isEnd;

    TrieNode() {
        isEnd = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;

        for(char ch : word) {

            if(node->child.find(ch) == node->child.end()) {
                node->child[ch] = new TrieNode();
            }

            node = node->child[ch];
        }

        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;

        for(char ch: word){
            if(node->child.find(ch)==node->child.end()){
                return false;
            }
            node=node->child[ch];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;

        for(char ch : prefix) {

            if(node->child.find(ch) == node->child.end()) {
                return false;
            }

            node = node->child[ch];
        }

        return true;
    }
};

int main() {
    Trie trie;

    trie.insert("apple");

    cout << trie.search("apple") << endl;     // 1
    cout << trie.search("app") << endl;       // 0
    cout << trie.startsWith("app") << endl;   // 1

    return 0;
}