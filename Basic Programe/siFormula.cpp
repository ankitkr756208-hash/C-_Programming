#include<iostream>
using namespace std;

int main(){
//    int i=4,j=4;
//    for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         cout<<"*";
//     }
//     cout<<endl;

//    }
// second
int n=5;
for(int i=1;i<=n;i++ ){// right angle triangle
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=1;i<=n;i++ ){ // inverted right angle triangle
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

for(int i=1;i<=n;i++){// diamond pattern
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
        cout<<" ";
    }
    for(int k=1;k<=2*(n-i)+1;k++){
        cout<<"*";
    }
    cout<<endl;
}


for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n || j==1 || j==n){
            cout<<"*";
        }
        else {
            cout<<" ";
        }
    }
    cout<<endl;
}

// number traingle
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}

//Character Triangle
for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<<char('A'+j)<<" ";
    }
    cout<<endl;
}

for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<<char('A'+i)<<" ";
    }
    cout<<endl;
}

// floyds triangle
int count=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}
    
}