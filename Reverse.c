#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer:");
    scanf("%d",&x);
    int y=x;
    int rem,rev=0;
    while(y>0){
        rem=y%10;
        rev=rev*10+rem;       
        y/=10; 
    }
    printf("Reverse of %d is %d",x,rev);
    return 0;
}