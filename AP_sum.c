#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int n;
        int sum=0;
        int i;
        printf("enter value of n \n");
        scanf("%d", &n);
        for(i=1;i<=n;i++){
                sum=sum+i;
        }
        printf("sum is %d",sum);
        
        return 0;
}