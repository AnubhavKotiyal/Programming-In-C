#include<stdio.h>
int main(){
    int x,y;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    if(x>y){
        printf("%d is greater than %d",x,y);
    }
    else{
        printf("%d is greater than %d",y,x);
    }
    return 0;
}