#include<stdio.h>
void main(){
int n;
printf("Enter Size of Arr: ");
scanf("%d",&n);
int arr[n];
printf("Enter the Elements: ");
for(int i=0; i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0; i<n;i++){
if(arr[i]<0){
printf("%d",arr[i]);
}
}
}
