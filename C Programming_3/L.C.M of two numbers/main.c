#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, num1, num2, max, cm=1;
    printf("Enter any two: ");
    scanf("%d%d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    i = max;
    while(1)
    {
        if(i%num1 == 0 && i%num2 == 0)
        {
            cm = i;
            break;
        }
        i += max;
    }
    printf("LCM of %d and %d = %d", num1, num2, cm);
    return 0;
}
