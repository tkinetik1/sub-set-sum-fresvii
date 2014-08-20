#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./fresv2 target_number");
        return 1;
    }

    int target_sum = atoi(argv[1]);
    int i, j, n;
    printf("The Mathematical Monster needs a string of numbers:\n");
    string s = GetString();
    printf("The target sum number is: %d\n", target_sum);
    
    for (i = 0, n = strlen(s); i <= n; i++)
    {
        for (j = i+1, n = strlen(s); j <= n; i++)
        {

            //string of s[i] & s[j]
            string x = strcat((&s[i]),&s[j]);
            //string of first 3 digits 
            string y = strcat(x, &s[j+1]);
            //string of first 4 digits.
            string z = strcat(y, &s[j+2]);
            // numw = s[i]
            int numw = s[i]-48;
            // numx = s[i][s[j]
            int numx = atoi(x)-48;
            int sumx = numw+numx;
            int numy = atoi(y)-48;
            int sumy = numx + numy;
            int numz = atoi(z)-48;
            int sumz = (numy + numz);
            printf("%d + %d  = %d\n", numw, s[i+1], sumx);
            printf("%d + %d = %d\n", s[i]-48, s[i+1] -48 , sumy - (48*2)); 
            printf("%d + %d + %d = %d\n", s[i]-48, s[j] - 48, s[j+1]-48 , sumz - (48*3)); 
            
            
            if (sumx || sumy || sumz == target_sum)
            {
                printf("The Mathematical Monster Made a Match!!\n");
            }
        }
    }
}
