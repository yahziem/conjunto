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