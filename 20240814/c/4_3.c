#include <stdio.h>

typedef struct complex_number {
    double real;
    double imag;
}complex;

void add(complex num1, complex num2);
void mul(complex num1, complex num2);

int main(void) {
    complex num1, num2;

    printf("복소수 입력1[실수 허수]: ");
    scanf("%lf %lf", &num1.real, &num1.imag);

    printf("복소수 입력2[실수 허수]: ");
    scanf("%lf %lf", &num2.real, &num2.imag);

    printf("합의 결과]");
    add(num1, num2);
    mul(num1, num2);

    return 0;
}

void add(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    printf("실수 : %f, 허수 : %f\n", result.real, result.imag);
}

void mul(complex num1, complex num2) {
    complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.imag * num2.real + num1.real * num2.imag;
    printf("실수 : %f, 허수 : %f\n", result.real, result.imag);
}