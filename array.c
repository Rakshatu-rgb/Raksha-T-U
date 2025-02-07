#include<stdio.h>
int main() {
    int array[100];
    int n,i;
    printf("enter the  no of array elemtents\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("print the elements");
    for(i=0;i<n;i++){
        printf("\n%d",array[i]);
    }
    printf("\n");
    return 0;
}