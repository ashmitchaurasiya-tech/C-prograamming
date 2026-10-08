#include<stdio.h>
int main()
{
    int i,arr[5];

    printf("Enter 5 elements of array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("you entered the array:");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}