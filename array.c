// array -> collection of same datatype variables
// array is homogenous datatype / user defined datatype
// int arr_name[size]       => int a[5] => a[0], a[1], a[2], a[3], a[4]
// index / position -> start with 0

#include<stdio.h>
int main()
{
    int a[5][5],i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter val a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

/*
    int arr[5],i;
    // int b[] = {1,2,3,5,6}; // array init
    for(i=0;i<5;i++)
    {
        printf("Enter val arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("arr[%d]: %d\n",i,arr[i]);
    }
*/
