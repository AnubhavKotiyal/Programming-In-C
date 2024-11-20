#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer:");
    scanf("%d",&x);
    int sum=0;
    int i=1;
    while(i<=x){
        sum+=i;
        i++;        
    }
    printf("Sum of first %d term is %d",x,sum);
    return 0;
}