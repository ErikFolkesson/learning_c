#include <stdio.h>

int main() {
    int lower = -100;
    int upper = 400;
    int stepSize = 50;

    int fahr = lower;

    while (fahr <= upper) {
        int celsius = 5 * (fahr - 32) / 9;
        printf("Fahrenheit: %d    \tCelsius: %d\n", fahr, celsius);
        fahr += stepSize;
    }
}