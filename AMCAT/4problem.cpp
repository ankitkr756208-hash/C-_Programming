// #include<iostream>
// using namespace std;

// int checkBirth(string month,int day){
//     if(month=="July" && day==5){
//         return 1;
//     }
//     else return 0;
// }


// int main(){
//     string month;
//     int day;
//     cin>>month>>day;

//     cout<<checkBirth(month,day)<<endl;  

// }
#include <iostream>
using namespace std;

int differenceofSum(int m, int n) {
    int sumDiv = 0, sumNotDiv = 0;

    for (int i = 1; i <= n; i++) {
        if (i % m == 0)
            sumDiv += i;
        else
            sumNotDiv += i;
    }

    return sumNotDiv - sumDiv;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << differenceofSum(m, n);
    return 0;
}

