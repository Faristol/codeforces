#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int sumar(int a, int b, int c) {
    return a + b + c;
}

float sumar(float a, float b) {
    return a + b;
}

int main() {
    cout << sumar(2, 3) << "\n";
    cout << sumar(2, 8, 3) << "\n";
    cout << sumar(2.2f, 3.4f) << "\n";
}
