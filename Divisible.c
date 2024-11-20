#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer:");
    scanf("%d",&x);
    if(x%5==0 && x%11==0){
        printf("%d is divisible by both 5 & 11.",x);
    }
    else{
        printf("%d is not divisible by both 5 & 11.",x);
    }
    return 0;
}