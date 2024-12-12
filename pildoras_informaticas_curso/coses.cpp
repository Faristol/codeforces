#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

double leerTemp(){
    return 20.0 + (rand()%20);
}
void esperarSeg(int segundos){
    this_thread::sleep_for(chrono::seconds(segundos));
}
int main(){
    const double tempMax = 35.0;
    while(true){
        double tempActual = leerTemp();
        cout << tempActual << endl;
        if (tempActual>=tempMax){
            cout << "AVISO TEMP > 35" << endl;
            esperarSeg(5);

        }
    }

}