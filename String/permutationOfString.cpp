#include <iostream>
#include <string>
using namespace std;

void permute(string &s, int l, int r) {
    if (l == r) {
        cout << s << endl; // base case: one permutation is ready
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);         // fix one char at position l
        permute(s, l + 1, r);     // permute the rest
        swap(s[l], s[i]);         // backtrack (restore original order)
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "All permutations are:" << endl;
    permute(s, 0, s.length() - 1);
    return 0;
}
