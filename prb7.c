#include <stdio.h>
int main(){
    char s[100];
    int i,len=0,flag=1;

    printf("enter the string:");
    scanf("%s",s);

    while(s[len]!='\0') len++;

    for(i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            flag=0;
            break;
        }
    }

    printf("Reverse: ");
    for(i=len-1;i>=0;i--) printf("%c",s[i]);

    if(flag) printf("\nPalindrome");
    else printf("\nNot Palindrome");
}