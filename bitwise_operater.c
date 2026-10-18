#include<stdio.h>
#include<conio.h>
void main()
{
   int a=20;
   int b=10;
   int result_and,result_or,result_xor;
   clrscr();

  result_and=a & b;

   result_or=a || b;

   result_xor=a ^ b;

   printf("value a b=%d%d",a,b);

   printf("\nresult_and=%d",result_and);
   printf("\nresult_or=%d",result_or);
   printf("\nresult_xor=%d",result_xor);

   getch();
   }
