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
    
    printf("The Mathematical Monster needs a string of numbers:\n");
    string s = GetString();
    printf("The target sum number is: %d\n", target_sum);
    
    for (int i = 0, n = strlen(s); i <= n; i++)
    {

        string x = strcat(&s[i]+1,&s[i]+2);
        int numi = s[i]- 48;
        int numx = atoi(x)-48;
        int sum = numi + numx;
        printf("%d + %d = %d\n", numi, numx, sum); 
        
    }
}
