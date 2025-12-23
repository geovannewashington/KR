#include <stdio.h>
#include <stdlib.h>

// Print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300
// Modified to print a heading above the table

// -- Prototypes
void print_heading();

int 
main()
{
    const int LOWER = 0;   // lower limit of temperature scale
    const int UPPER = 300; // upper limit
    const int STEP  = 20;  // step size
    
    float fahr_temp = LOWER;
    
    print_heading();
    while (fahr_temp <= UPPER) {
        float celcius_temp = (5.0 / 9.0) * (fahr_temp - 32.0);
        printf("%3.0f\t%6.1f\n", fahr_temp, celcius_temp);
        fahr_temp += STEP;
    }
    return EXIT_SUCCESS; 
}

void 
print_heading()
{
    printf("-----------------\n");
    printf("fah\t%8s\n", "celcius");
    printf("-----------------\n");
}

