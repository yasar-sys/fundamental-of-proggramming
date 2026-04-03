#include <stdio.h>
struct Student{
    int roll;
    char name[50];
};

int main(){
    FILE *fp;
    struct Student s;

    fp=fopen("data.txt","wb");

    scanf("%d %s",&s.roll,s.name);
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);

    fp=fopen("data.txt","rb");
    fread(&s,sizeof(s),1,fp);

    printf("%d %s",s.roll,s.name);
    fclose(fp);
}