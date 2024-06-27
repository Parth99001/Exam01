#include<stdio.h>
int main(){
    int max;
int arr[3][3]={{1,2,1},{1,2,3}};
max=arr[0][0];
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
if(max<arr[i][j]){
max=arr[i][j];
}
}
}
printf("%d",max);
}