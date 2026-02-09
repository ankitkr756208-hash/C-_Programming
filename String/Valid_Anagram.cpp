#include<iostream>
#include<string>

using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()) return false;

    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;

    }
    for(int i=0;i<26;i++){
        if(count[i]!=0) return false;
    }

return true;

}


int main(){
    string s1 = "listen";
    string s2 = "silent";

    if(isAnagram(s1, s2)){
        cout << s1 << " and " << s2 << " are anagrams." << endl;
    } else {
        cout << s1 << " and " << s2 << " are not anagrams." << endl;
    }

    return 0;
}
