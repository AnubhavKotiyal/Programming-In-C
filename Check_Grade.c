#include<stdio.h>
int main(){
    int x;
    printf("Enter Marks:");
    scanf("%d",&x);
    if(x>=90){
        printf("%d has grade A+",x);
    }
    else if(x>=80 && x<90){
        printf("%d has grade A",x);
    }
    else if(x>=70 && x<80){
        printf("%d has grade B",x);
    }
    else if(x<70 && x>33){
        printf("%d has grade C",x);
    }
    else{
        printf("Fail");
    }
    return 0;
}