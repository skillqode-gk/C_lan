// structure -> collection of diffrent datatype
#include<stdio.h>
struct Student{
  int roll;
  char name[20];
  int m,s,e,t;
  float pr;  
};
int main()
{
    struct Student a[5];
    int i;
    for(i=0;i<2;i++){
        printf("Enter roll no: ");
        scanf("%d",&a[i].roll);
        printf("Enter student name: ");
        scanf("%s",&a[i].name);
        printf("Enter maths marks: ");
        scanf("%d",&a[i].m);
        printf("Enter Science marks: ");
        scanf("%d",&a[i].s);
        printf("Enter english marks: ");
        scanf("%d",&a[i].e);
    }


    printf("Roll\tName\tMaths\tScience\tEnglish\tTotal\tPercentage");
    for(i=0;i<2;i++){
        a[i].t = a[i].m + a[i].s + a[i].e;
        a[i].pr = (float)a[i].t / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].roll, a[i].name, a[i].m, a[i].s, a[i].e, a[i].t, a[i].pr);
    }
    
}

// product bill