#include<stdio.h>
int main(){
    char a,x;
    printf("For enter  letters enter 'a'\n for digit enter 'b':");
    scanf("%c",&a);
    if(a=='a'){
        printf("enter an alphabate");
        scanf("%c",&x);
        if(x=='a'){
        if(x>='a' && x<='z'){
            printf("%c is a lowercase character.",x);
        } 
        else{
            printf("%c is a uppercase character.",x);
        }
    }
    }
    else{
        int a;
        printf("Enter a digit:");
        scanf("%d",&a);
        printf("%d is a digit.",a);
    }   
    return 0;
}