#include <stdio.h> // Include the standard input/output header file.

void main()
{
   int i, j, n; // Declare variables for loop counters and the number of rows.
   scanf("%d", &n); // Read the input from the user.

   for(i = 0; i <= n; i++) // Loop to generate each row of the pattern.
   { /* Display numbers in ascending order up to the middle */
     for(j = 1; j <= i; j++) // Loop to print numbers in ascending order.
       printf("%d", j);

     /* Display numbers in reverse order after the middle */
     for(j = i - 1; j >= 1; j--) // Loop to print numbers in descending order.
       printf("%d", j);

     printf("\n"); // Move to the next line after printing a row.
   }
}

