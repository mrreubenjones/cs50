#include <cs50.h>
#include <stdio.h>

void buildPyramid(int height);

int main(void)
{
    /* Request height from user, until
    valid height is provided (0 - 23) */
    int height;
    do {
        printf("Height: ");
        height = get_int();
    } while (height < 0 || height > 23);

    buildPyramid(height); 

}

void buildPyramid(int height)
{
    int spaces = height - 1;
    int blocks = height + 1 - spaces;
    
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        
        for (int k = 0; k < blocks; k++)
        {
            printf("#");
        }
        
        printf("\n");
        spaces--;
        blocks++;
    }
}