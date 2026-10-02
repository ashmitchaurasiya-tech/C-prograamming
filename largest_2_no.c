#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);

    if (a>b){
        printf("%d is largest number\n",a);
    }else if(b>a){
        printf("%d is largest number\n",b);
    }else{
       printf("Both numberf are equal\n");
    }
    return 0;
}