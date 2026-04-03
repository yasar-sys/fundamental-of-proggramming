#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;

        if(ch == ' ' || ch == '\n') {
            words++;
        }
    }

    printf("Total Characters = %d\n", chars);
    printf("Total Words = %d\n", words + 1);

    fclose(fp);

    return 0;
}