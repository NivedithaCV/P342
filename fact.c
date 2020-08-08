#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;float p=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n<0){
        printf("You have entered a negative number");
    }
    else{
        for(int i=1;i<n+1;i++){
            p=p*i;
        }
        printf("The factorial is %f",p);
    }
    return 0;
}