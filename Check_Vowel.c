#include<stdio.h>
int main(){
    char x;
    printf("Enter alphabate:");
    scanf("%c",&x);
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("%c is Vowel",x);
    }
    else{
        printf("%c is Consonant",x);
    }
    return 0;
}