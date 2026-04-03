#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    float m1,m2,m3;
};

int main(){
    struct Student s;
    float total,avg;

    scanf("%d %s %f %f %f",&s.roll,s.name,&s.m1,&s.m2,&s.m3);

    total=s.m1+s.m2+s.m3;
    avg=total/3;

    printf("Total=%.2f Avg=%.2f\n",total,avg);

    if(avg>=80) printf("A");
    else if(avg>=60) printf("B");
    else if(avg>=40) printf("C");
    else printf("Fail");
}