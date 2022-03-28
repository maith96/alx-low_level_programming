#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for(int i =48;i<58;i++){
         for(int j =48;j<58;j++){
			 for(int k=48;k<58;k++)
			 {
				if(i==j || i>j)
             		continue;
              	putchar(i);
              	putchar(j);
				putchar(k);

              	putchar(' ');
			 }
             
            
         }
	putchar('\n');

	return (0);
}
