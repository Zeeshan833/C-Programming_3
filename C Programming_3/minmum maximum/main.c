
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#define MAX_SIZE 100


int main()
{

    printf("minimum integer value = %d\n"
            "maximun int value = %d\n"
            "size of int bytes = %zu\n"
            "size of int bites = %zu", INT_MIN, INT_MAX, sizeof(int), sizeof(int)* CHAR_BIT);

printf("UINT_MAX+9 = %u", UINT_MAX+9);
    static int i= 6;
    if (--i){
        printf("%d", i);
        main(10);
    }
    return 0;
}
