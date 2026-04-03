#include <stdio.h>
int main(){
    char s[200];
    int i,words=1,v=0,c=0;

    gets(s);

    for(i=0;s[i]!='\0';i++){
        if(s[i]==' ') words++;
        else if(strchr("aeiouAEIOU",s[i])) v++;
        else if(isalpha(s[i])) c++;
    }

    printf("Words=%d\nVowels=%d\nConsonants=%d",words,v,c);
}