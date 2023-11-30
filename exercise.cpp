#include <iostream>
#include "Celular.hpp"
using namespace std;

void llenaArreglo(Celular celulares[], int cantidad){
    string modelo, marca, marcaBat;
    double volt;
    for(int i=0; i<cantidad;i++){
        cout << "Datos del Celular "<< i+1 << std::endl;
        cout << "Modelo: ";
        cin >> modelo;
        cout << "Marca: ";
        cin >> marca;
        cout << "Ingresa la marca y el voltaje de la bateria separados por un espacio: ";
        cin >> volt >> marcaBat;
        /*Modifica ahora al objeto Celular de la posición i del arreglo con los datos recibidos*/

}

void imprimeCelulares(Celular celulares[], int cantidad){
    //Implementa la función
}


int main()
{
    const int NUM = 3; //constante para el tamaño del arreglo
    //Agrega las instrucciones necesarias de acuerdo a lo que te solicitan en el documento del examen

    return 0;
}
