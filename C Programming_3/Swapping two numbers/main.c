#include <stdio.h>
#include <stdlib.h>

int main()
{

      int num1;
      int num2;
      int temp;
      printf("enter the first nuumber:");
      scanf("%d", &num1);
      printf ("enter the second number:");
      scanf("%d", &num2);
      temp=num1;
       num1=num2;
       num2=temp;

      printf("number1: %d\n", num1);
      printf("number2: %d", num2);
      return  0;
}
