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
    
    int sum, sum1, sum2, sum3, sum4;
    int target_sum = atoi(argv[1]);
    
    printf("The Mathematical Monster needs a string of numbers:\n");
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        
        for (int j = i + 1, n = strlen(s); i <= n-1; i++)
        {
            
            int s_i = s[i]-48;
            int s_j = s[j]-48;
            int s1_i = (s[j]+1) - 48;
            int s2_i = (s[j]+2) - 48;
            int s3_i = (s[j]+3) - 48;
            int s4_i = (s[j]+4) - 48;
            
            sum = s_i + s_j;
            sum1 = s_i + s_j + s1_i;
            sum2 = s_i + s_j + s1_i + s2_i;
            sum3 = s_i + s_j + s1_i + s2_i + s3_i;
            sum4 = s_i + s_j + s1_i + s2_i + s3_i + s4_i;
            
            printf("%d + %d = %d\n", s_i, s_j, sum);
            printf("%d + %d + %d = %d\n", s_i, s_j, s1_i, sum1);
            printf("%d + %d + %d + %d = %d\n", s_i, s_j, s1_i, s2_i, sum2);
            printf("%d + %d + %d + %d + %d + %d = %d\n", s_i, s_j, s1_i, s2_i, s3_i, s4_i, sum4);


            
            if (sum == target_sum)
            {
                
                printf("The Mathematical Monster Made a Match!!\n");
                printf("MATCH: %d + %d = %d\n", s_i, s_j, sum);

            }
            
            if (sum1 == target_sum)
            {
                
                printf("The Mathematical Monster Made a Match!!\n");
                printf("MATCH: %d + %d + %d = %d\n", s_i, s_j, s1_i , sum1);
            }
            
            if (sum2 == target_sum)
            {
                
                printf("The Mathematical Monster Made a Match!!\n");
                printf("MATCH: %d + %d + %d + %d = %d\n", s_i, s_j, s1_i , s2_i, sum2);
            }
            
            if (sum3 == target_sum)
            {
                
                printf("The Mathematical Monster Made a Match!!\n");
                printf("MATCH: %d + %d + %d + %d +%d = %d\n", s_i, s_j, s1_i , s2_i, s3_i, sum3);
            }
            
            if (sum4 == target_sum)
            {
                
                printf("The Mathematical Monster Made a Match!!\n");
                printf("MATCH: %d + %d + %d + %d + %d + %d = %d\n", s_i, s_j, s1_i , s2_i, s3_i, s4_i, sum4);
            }
        }
    }
}
            
