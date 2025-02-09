/*
Q1>

   *
  **
 ***
****

Q2>
   *
  ***
 *****
*******

Q3>             i     j
   *            0     0 1 2 3 4 5 6
  ***           1
 *****          2
*******         3
 *****          4 
  ***           5 
   *            6

                i      j  
   *            0      4 5 6    -> j > 3 + i
  ***           1      5 6      -> j > 3 + i
 *****          2      6        -> j > 3 + i    
*******         3               -> j > 3 + i
 *****          4      6        -> j > 9 - i
  ***           5      5 6      -> j > 9 - i
   *            6      4 5 6    -> j > 9 - i 

*/


#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 7; i++) {

        for(int j = 0; j < 7; j++) {

            if (i < 4) {

                if (j < 3 - i || j > 3 + i) {
                    printf(" ");
                } else {
                    printf("*");
                }
                
            } else {

                if (j < i - 3 || j > 9 - i) {
                    printf(" ");
                } else {
                    printf("*");
                }

            }
            
        }

        printf("\n");
    }



    return 0;
}