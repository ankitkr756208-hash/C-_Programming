#include<stdio.h>
int main(){
    int row=0;
    int col=0;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int sum=0;
    int i=0,j=0;
    while(i<row && j<col){
        if(mat[i][j] % 2==0){
            sum +=mat[i][j];
        }
        i++;
        j++;
    }
    printf("%d",sum);

}