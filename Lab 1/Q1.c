#include <stdio.h>
#include <stdlib.h>
/* for loop: */
int main()
{
    int sum = 0, i;

    for(i = 30; i<1001; i++)     /* loops through all numbers between 30 and 1000 */
    {
        if (i%4 == 0)
        {
            sum +=i;           /* adds numbers between 30 and 1000, only if the numbers are multiples of 4 */
        }
    }
    printf("The sum of all numbers between 30 and 1000 that are multiples of 4 is %d.\n", sum);


/*while loop*: */


    int sum1 = 0, x = 30;

    while (x>=30, x<=1000)   /* runs only while the condition that x is between 30 and 1000 is true */
    {
       if (x%4 == 0)
        {
            sum1 +=x;       /* adds numbers between 30 and 1000, only if the numbers are multiples of 4 */
        }
        x++;                /* increments x by 1 each time */
    }
   printf("The sum of all numbers between 30 and 1000 that are multiples of 4 is %d.\n", sum1);

/* do while loop: */

   int sum2 = 0, x1 = 30;

   do                      /* runs only while x1<1001 */
   {
     if (x1%4 == 0)
     {
        sum2 +=x1;         /* adds numbers between 30 and 1000, only if the numbers are multiples of 4 */
     }
      x1++;                /* increments x by 1 each time */
   }
   while (x1<1001);

   printf("The sum of all numbers between 30 and 1000 that are multiples of 4 is %d.", sum2);
   return 0;
}
