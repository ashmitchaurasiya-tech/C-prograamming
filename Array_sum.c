#include<stdio.h>

int main()
{
    int arr[5],i,sum=0;

    printf("enter the 5 elements of array: ");
    for(i=0 ; i<5 ; i++){
        scanf("%d",&arr[i]);
    }

    for (i=0 ; i<5 ; i++){
        sum = sum + arr[i];
    }

    printf("The sum of all elements of array = %d",sum);

    return 0;
}