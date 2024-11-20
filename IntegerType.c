#include<stdio.h>
int main(){
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    if(a>0){
        printf("Its a Positive Number");
    }
    else if(a<0){
        printf("Its a Negative Number");
    } 
    else{
        printf("it is equal to zero");
    }
    return 0;
}