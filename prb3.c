#include<stdio.h>

int main()
{
    int choice,n,i,fact,rev,temp;

    do{
        printf("\n1. Factorial\n");
        printf("2. Reverse Number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                fact=1;
                printf("Enter number: ");
                scanf("%d",&n);

                for(i=1;i<=n;i++)
                    fact*=i;

                printf("Factorial = %d\n",fact);
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d",&n);

                rev=0;
                while(n!=0)
                {
                    temp=n%10;
                    rev=rev*10+temp;
                    n/=10;
                }

                printf("Reverse = %d\n",rev);
                break;
        }

    }while(choice!=3);

    return 0;
}