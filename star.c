/*
Sample output:

         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *

*/

#include <stdio.h>
#define STARS 10
int main(int argc, char const *argv[])
{
   int count, start, skip;
   for (count = 1; count <= STARS; ++count)
   {
      skip = STARS - count;
      start = 1;
      while(skip > 0){
         printf("%c", ' ');
         skip--;
      }
      while(start <= count){
         printf("%c", '*');
         printf("%c", ' ');
         start++;
      }
      printf("\n");
   }
   return 0;
}

