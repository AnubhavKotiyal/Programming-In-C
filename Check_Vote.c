#include<stdio.h>
int main(){
    int x;
    printf("Enter Year:");
    scanf("%d",&x);
    if(x>18){
        printf("%d is eligible for vote.",x);
    }
    else{
        printf("%d is not eligible for vote.",x);
    }
    return 0;
}