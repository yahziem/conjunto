#include <iostream>
#include "funciones.cpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int n;
    double d;

    cout << "Ingrese el numero" << endl;
    cin >> n;
    cout << "El factorial de " << n << " es: " << factorial(n) << endl;

    cout << "Por favor ingrese el número: " << endl;
    cin >> n;
    cout << "La suma de cuadrados hasta " << n << " es " << sumacuadrada(n) << endl;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "El término " << n << " de la sucesión recursiva X_i=2*x_(i-1)-3 es: " << recursiva(n) << endl;

    cout << "Ingrese un número para calcular su raíz cuadrada: ";
    cin >> d;
    cout << "La raíz cuadrada de " << d << " es: " << raizCuadrada(d) << endl;

    cout << "Ingrese un número para verificar si es primo: ";
    cin >> n;
    cout << n << (esPrimo(n) ? " es primo." : " no es primo.") << endl;

    cout << "Ingrese el término de la serie Fibonacci que desea calcular: ";
    cin >> n;
    cout << "El término " << n << " de la serie Fibonacci es: " << fibonacci(n) << endl;

    return 0;
}