#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer:");
    scanf("%d",&x);
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial*=i;
    }    
    printf("Factorial of %d is %d",x,factorial);   
    return 0;
}