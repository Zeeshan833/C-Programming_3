#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, num1, num2, min, HCF=1;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    min = (num1<num2) ? num1 : num2;
    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            HCF = i;
        }
    }
    printf("HCF of %d and %d = %d\n", num1, num2, HCF);
    return 0;

}
