#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{

    int i, j, length;
    char string[MAX_SIZE];
    char reverse[MAX_SIZE];
    printf("enter a string:");
    gets(string);
    length = strlen(string);
    j=0;
    for(i=length-1; i>=0; i--){
        reverse[j] = string[i];
        j++;}

     reverse[j] = '\0';
     printf("reverse string: %s", reverse);
    return 0;
}
