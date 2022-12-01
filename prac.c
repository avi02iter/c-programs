#include<stdio.h>
#define n 5
int main(){
    int a[n];
    printf("enter the array element\n");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    printf("the array at %d is %d\n",i,a[i]);
}
for(int i=n-1;i>=0;i--){
    printf("the array at index %d is %d in reverse order\n",i,a[i]);
}

    return 0;
}