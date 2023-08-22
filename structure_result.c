/*
-> structure:
-> structure is user define data type that store the collection of different data types.

-> Syntax:

    -> structure declaration
        struct structure_name
        {
            datatype variable_1;
            datatype variable_2 = 00;
            datatype variable_3[5];
        };

    -> structure initilazation
        struct structure_name variable_name;

    -> structure Use
        variable_name.variable_1;


*/

#include <stdio.h> m

struct student
{
    int math, sci, guj, total, per;
    char grade;
};


int main()
{
    struct student studentdata;

    printf("Enter math Marks: ");
    scanf("%d",&studentdata.math);
    printf("Enter sci Marks: ");
    scanf("%d",&studentdata.sci);
    printf("Enter guj Marks: ");
    scanf("%d",&studentdata.guj);

    studentdata.total = studentdata.math + studentdata.sci + studentdata.guj;
    printf("Total is: %d\n",studentdata.total);

    studentdata.per = studentdata.total / 3;
    printf("Per is: %d\n",studentdata.per);

    if(studentdata.per >= 90)
    {
        studentdata.grade = 'A';
    }
    else if (studentdata.per >= 80)
    {
        studentdata.grade = 'B';
    }
    else if (studentdata.per >= 70)
    {
        studentdata.grade = 'C';
    }
    else if (studentdata.per >= 50)
    {
        studentdata.grade = 'D';
    }
    else if (studentdata.per >= 33)
    {
        studentdata.grade = 'F';
    }

    printf("Grade is: %c\n",studentdata.grade);


}