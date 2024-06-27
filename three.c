#include<stdio.h>
void main(){
   int r;
   int c;
   printf("Enter Row Number: ");
   scanf("%d", &r);
   printf("Enter Coll Number: ");
   scanf("%d", &c);
   int arr[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("Enter the Elements of Row and Coll: ");
        scanf("%d",&arr[i][j]);
    }

   }
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d",arr[j][i]);
    }
printf("\n");
   }
   
}