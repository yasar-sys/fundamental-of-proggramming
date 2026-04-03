#include <stdio.h>
struct Emp{
    int id;
    char name[50];
};

int main(){
    FILE *fp;
    struct Emp e;
    int search,found=0;

    fp=fopen("data.txt","rb");

    scanf("%d",&search);

    while(fread(&e,sizeof(e),1,fp)){
        if(e.id==search){
            printf("%d %s",e.id,e.name);
            found=1;
        }
    }

    if(!found) printf("Not Found");

    fclose(fp);
}