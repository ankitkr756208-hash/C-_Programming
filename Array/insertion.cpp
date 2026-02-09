#include <iostream>
using namespace std;

int main(){
    int arr[20]={10,20,30,40,50};
    int n=5;
    int pos,element;

    cout<<"Present Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;

    }
    //input position and element
    cout<<"Enter position";
    cin>>pos;
    cout<<"Enter elements to insert";
    cin>>element;

    //shift element to the right
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos-1]=element;
    n++;
    //Insert new array
    cout<<"Array after insertion:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

