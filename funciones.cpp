#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int sumacuadrada(int n) {
    int f;
    if (n == 1) {
        f = 1;
    } else {
        f = (n * n) + sumacuadrada(n - 1);
    }
    return f;
}

int recursiva(int n) {
    if (n == 0)
        return 1;
    return 2 * recursiva(n - 1) - 3;
}

double raizCuadrada(double n) {
    return sqrt(n);
}

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}