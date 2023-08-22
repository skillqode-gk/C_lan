// Array pass with function
#include<stdio.h>
#define n 8
void display(int arr[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }  
}
int main()
{
    int a[n],i;
    for(i=0;i<n;i++){
        printf("Enter val: ");
        scanf("%d",&a[i]);
    }
    display(a);
}
// maximum no & minimum no findout
/*
    10
    20  30
    30  50
    40  70
    50  90
*/
