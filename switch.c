// switch case -> menu driven program
// Continue
// goto(jump)
#include<stdio.h>
int main()
{
    int i=1;
    test:
        if(i<=10){
            printf("%d ",i);
            i++;
            goto test;
        }
}


/*
    int a=13, b = 5,ch;
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Addition of a and b is: %d\n", a+b);
        break;
    case 2:
        printf("Substraction of a and b is: %d\n", a-b);
        break;
    case 3:
        printf("Multiplication of a and b is: %d\n", a*b);
        break;
    case 4:
        printf("Division of a and b is: %d\n", a/b);
        break;
    default:
        printf("Wrong choice...");
        break;
    }

    for(int i = 1;i<=15;i++){
        if(i==4 || i==9){
            continue;
        }
        printf("%d ",i);
    }
*/