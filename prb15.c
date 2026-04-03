#include <stdio.h>

int main() {
    FILE *fp, *evenFile, *oddFile;
    int num;

    // open files
    fp = fopen("input.txt", "r");
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if(fp == NULL) {
        printf("Input file not found!");
        return 0;
    }

    // read numbers
    while(fscanf(fp, "%d", &num) != EOF) {
        if(num % 2 == 0) {
            fprintf(evenFile, "%d ", num);
        } else {
            fprintf(oddFile, "%d ", num);
        }
    }

    printf("Done! Check even.txt and odd.txt");

    fclose(fp);
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}