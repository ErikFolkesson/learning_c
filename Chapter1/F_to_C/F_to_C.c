#include <stdio.h>

void C_to_F(const int lower, const int upper, const int stepSize) {
    int celsius = lower;

    printf("Celsius: \tFahrenheit:\n");

    while (celsius <= upper) {
        const float fahrenheit = (float)celsius * (9.0 / 5.0) + 32.0;
        printf("%10d\t%7.1f\n", celsius, fahrenheit);
        celsius += stepSize;
    }
}

void F_to_C(const int lower, const int upper, const int stepSize) {
    int fahrenheit = upper;

    printf("Fahrenheit: \tCelsius:\n");

    while (fahrenheit >= lower) {
        const float celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
        printf("%10d\t%7.1f\n", fahrenheit, celsius);
        fahrenheit -= stepSize;
    }
}

int main() {
    F_to_C(-100, 400, 50);

    C_to_F(-50, 200, 25);
}