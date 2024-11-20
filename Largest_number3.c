#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    printf("enter value of z:");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("%d is greatest number",x);
    }
    else if(y>x && y>z){
        printf("%d is greatest number",y);
    }
    else{
        printf("%d is greatest number",z);
    }
    return 0;
}