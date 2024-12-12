#include <iostream>
#include <cmath>

using namespace std;

//prototip funcions
//tot i que el fluxe es de dalt a avall, al declarar el prototip de la fruncio abans
//li indiquem al programa que existeix una funció, i ell la busca
double elevaPotencia(double base, double exp);
void elevaPo(double base , double exp);
int main(){
    cout << "El resultat es: "<< elevaPotencia(2,2) << endl;
    cout << "Void pow: "; elevaPo(6,6);
}
double elevaPotencia(double base, double exp){
    return pow(base,exp);
}
void elevaPo(double base, double exp){
    cout << pow(base,exp);
}
 