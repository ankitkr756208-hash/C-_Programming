#include<iostream>
using namespace std;

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,1,2};
     int n1=sizeof(arr1)/sizeof(arr1[0]);
     int n2=sizeof(arr2)/sizeof(arr2[0]);

    int unionArr[n1+n2];
    int i=0,j=0,k=0;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            unionArr[k++]=arr1[i++];
            j++;
        }
    }

   

    cout<<"Intersection of two arrays is: ";
    for(int x=0;x<k;x++){
        cout<<unionArr[x]<<" ";
    }

    return 0;
}