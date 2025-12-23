// Let's write a utility program that accepts an optional command-line argument, that converts Celcius 
// to Fahrenheit

#include <stdio.h>
#include <stdlib.h>

// - Macros
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m" // Resets color to default

// -- Prototypes
void print_banner();
void print_heading();

int 
main(int argc, char **argv)
{
    const int LOWER = 0;   // lower limit of temperature
    const int UPPER = 300; // upper limit of temperature
    const int STEP  = 20;  // step for incrementing the temperature
    
    print_banner(); 
    print_heading();

    float celcius = LOWER;
    while (celcius <= UPPER) {
        float fah = celcius * (9.0f / 5.0f) + 32.0f;
        printf(ANSI_COLOR_GREEN "%5.0f°C %13.1f°F\n" ANSI_COLOR_RESET, celcius, fah);
        celcius += STEP;
    }
    return EXIT_SUCCESS;
}

void
print_banner()
{
    printf(
        "%s"
        "          _      _             _           __      _             \n"
        "         | |    (_)           | |         / _|    | |            \n"     
        "  ___ ___| | ___ _ _   _ ___  | |_ ___   | |_ __ _| |__          \n"  
        " / __/ _ \\ |/ __| | | | / __| | __/ _ \\  |  _/ _` | '_ \\      \n" 
        "| (_|  __/ | (__| | |_| \\__ \\ | || (_) | | || (_| | | | |      \n"
        " \\___\\___|_|\\___|_|\\__,_|___/  \\__\\___/  |_| \\__,_|_| |_| \n"
        "%s\n", ANSI_COLOR_MAGENTA, ANSI_COLOR_RESET);
}

void 
print_heading()
{
    printf(ANSI_COLOR_CYAN);
    printf("------------------------\n");
    printf("Celcius %15s\n", "Fahrenheit");
    printf("------------------------\n");
    printf(ANSI_COLOR_RESET);
}
