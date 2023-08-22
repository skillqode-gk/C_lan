// poniter -> store to address of another variable as a data
#include<stdio.h>
void main()
{
    int a[5] = {10,20,30,40,50};
    int *p;
    p = &a;

    for(int i=0;i<5;i++){
        printf("%d\t%u\n", *(p+i), (p+i));
        // printf("%d\t%u\n", a[i], &a[i]);
    }
}
// swapping value using pointer
/*
    int a = 20, *p, **q;
    p = &a;
    q = &p;
    printf("Value of a is: %d\n",a);
    printf("Address of a is: %u\n",&a);
    printf("Address of a using p is: %d\n",p);
    printf("Address of p is: %u\n",&p);
    printf("Value of a using p is: %d\n",*p);
    printf("Value of a using q is: %d\n",**q);
*/