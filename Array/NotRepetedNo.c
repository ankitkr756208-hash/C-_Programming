#include<stdio.h>
int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int i,j,flag;

//     printf("Non Repeted elements are : \n");
//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=0;j<n;j++){
//             if(i!=j){
//                 if(arr[i]==arr[j]){
//                     flag=1;
//                     break;
//                 }
//             }
//         }
//         if(flag==0){
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// }

    int arr[10]={1,2,3,4,5,1,2,3,4,5};
    int n=10;
    int i,j,flag;

    printf("Non Repeted elements are : \n");
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}