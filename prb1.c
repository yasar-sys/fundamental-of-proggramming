#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of row:");
    scanf("%d", &n);

//upper

for (int i = 1; i <= n; i++)
{
    for (int j = i; j < n; j++)
    {
     printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
        printf("%c ", 'A'+j-1);
    }
    printf("\n");
    
}

//lower

for (int i = n-1; i >= 1; i--)
{
    for (int j = n; j > i; j--)
    {
     printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
        printf("%c ", 'A'+j-1);
    }
    printf("\n");
    
}

    return 0;
}