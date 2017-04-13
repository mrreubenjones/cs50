#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    printf("Number: ");
    long cc = get_long_long();
    printf("%ld\n", cc / 10);
    
}