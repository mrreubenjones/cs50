#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Hey there! What's your name? ");
    string name = get_string();
    printf("Hello, %s\n", name);  
}