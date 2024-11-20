#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer:");
    scanf("%d",&x);
    int y=x;
    int i;
    for(i=1;i<=10;i++){
        x*=i;
        printf("%d X %d = %d\n",y,i,x);
        x=y;
    }
    return 0;
}