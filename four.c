#include<stdio.h>
void main(){
    int r , r1;
    int rowSum=0;
    int c , c1;
    int collSum=0;
    printf("Enter Row Number: ");
    scanf("%d", &r);
    printf("Enter Coll Number: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Row & Coll Elements: ");
            scanf("%d", &arr[i][j]);
        }
    }  
    printf("Enter Row No: ");
    scanf("%d",&r1);
    for(int i=r1;i==r1;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
            rowSum+=arr[i][j];
        }
    }

    printf("Total Number is:%d\n ",rowSum);

      printf("Enter Coll No: ");
    scanf("%d",&c1);
    for(int i=0;i<r;i++){
        for(int j=c1;j==c1;j++){
            printf("%d",arr[i][j]);
            collSum+=arr[i][j];
        }
    }
      printf("Total Number is:%d ",collSum);
}