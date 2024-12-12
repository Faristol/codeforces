#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // capturem l'instant actual i generem una semilla a partir d'aquest, de manera que
    // a cada execució siga únicas
    srand(time(nullptr));
    int i = 0;
    bool adivinat = false;
    int num_secret = rand() % 100 + 1;
    do{
        int num_intro;
        cout << "Introdueix un num entre 1 i 100"<< endl;
        cin >> num_intro;
        if(num_secret == num_intro){
            cout << "Eres un màquina" << endl;
        }else if (num_secret> num_intro) cout << "Puja-li un poquet \n";
        else cout << "Baixa-li" <<endl;
        i++;
    }while(i<5 && !adivinat);

}