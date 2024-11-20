#include<stdio.h>
int main(){
    int x,flag;
    printf("Enter an integer:");
    scanf("%d",&x);
    if(x==0 || x==1){
        flag=1;
    }
    for(int i=2;i<=x/2;++i){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is not a prime number.",x);
    }
    else{
        printf("%d is a prime number",x);
    }
    return 0;
}