/*
// function - work
        Argument    Return
    1.  No          No
    2.  No          with
    3.  With        No
    4.  With        With
*/
// NAWR
#include<stdio.h>
int Harsh(int a, int b)      // defination 
{
    return a + b;
}
int main()
{
    int a,b,t;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
   int x = Harsh(a,b);    // call
   printf("Addition of a and b is: %d",x);
}