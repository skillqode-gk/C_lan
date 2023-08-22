/*
String - collection of char
    last char ->    '\0' (NULL char)  
    strlen -> length
    strrev -> reverse
    strcon -> concate (merge)
*/
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    // scanf("%s",&str);   // space not allowed
    // scanf("%[^\n]s",&str);   // space allowed-
    gets(str);  // space allowed

    printf("Your String is: %s\n",str);
    // puts(str);

    //length
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    printf("\nLenth is: %d",i);
}

/*  0 1 2 3 4 5
    h e l l o \0
*/