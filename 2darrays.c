#include <stdio.h>

int main()
{
    //int data[10][2] = {0,0,1,2,2,4,3,6,4,8,3,3,123,32,1,2,2,31,2,0};
    char alpha[6][2] = "'a','b','c','d','e','f','g','h','i','j','k','l'";
    int i, j;
 
    i = 0;
   /* output each array element's value */
   while (i < 6) 
   {
       j = 0;
       while (j < 2) 
       {
          // printf("data[%d][%d] = %d\n", i,j, data[i][j] );
           printf("alpha[%c][%c] = %c\n", i,j, alpha[i][j] );
           j++;
        }
     i++;
   }
   return 0;
}