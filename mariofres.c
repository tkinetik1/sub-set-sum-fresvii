#include <stdio.h>
#include <cs50.h>

//cs50x problem set 1 - Tyson Frederick
int main (void)
{
        
    int x;
    
    do
    {
        printf("Pshh.. Pyramid Height?\n");        
        x = GetInt();
    }
    
    while ( x>23 || x<0 );
        
    if (x== 1)
    {
        printf("##\n");
    }
    
    else if (x > 1)
    {
        // calculates how many lines in relation to x; x = linecount. number of lines.
        
        //each for loop of lines = 1 line.
        for (int i = 0; i < x; i++)
        {
            // calculates and prints spaces per line.  per line, add 1 space starting at x = 1, go until spaces = spaces + 1.  i.e. one line (linecount 1). 
            
            int k;
            for (k = i; x > (k + 1); k++)
            {
                printf(" ");
            }
            
            // calculates how many pound symbols are needed in relation to x = linenum (height in lines).
            int l;
            
            for (l = i; l + 2 > 0; l--)
            {
                printf("#");
            }
            
            // "\n" creates a new line.
            printf("\n");
        }
        
    // exit program.
    }
    return 0;
}
