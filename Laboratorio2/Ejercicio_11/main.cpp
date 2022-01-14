#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;


char numero[15][20];
int filas = 15; int columnas = 20;
int opciones;

//nota
/* el + significa que esta disponible el lugar el - que esta ocupado, la sala se lee de arriba a abajo empezando por 0
*/


void mostrar(){
    //-------------------------muesta la sala de cines------------------
    for(int i=0 ; i<filas ; i++){
        for(int j=0 ; j<columnas ; j++){
            cout<<numero[i][j]<<" ";
        }
        cout<<"\n";
    }


}


int main()
{


    cout<<"Ingrese 0 si la sala apenas empieza, 1 si va a agregar una reservacion y 2 si va a cancelar ,"<<endl<<"3 si no va a realizar ninguna otra accion: ";
    cin>>opciones;


    while (opciones != 3){


    if(opciones==0){  //----------se desea iniciar una nueva sala de cine---------------------
    cout<<"Ingrese disponibilidad de asientos + si esta disponible y - si esta ocupado"<<"\n";
    //se crea la sala
    for(int i=0 ; i<filas ; i++){
        for(int j=0 ; j<columnas ; j++){
            cout<<"numero ["<<i<<"]["<<j<<"]";
            cin>>numero[i][j];
        }
    }
    mostrar();
    }


    if(opciones==1){ //--------------------se desea agregar una reserva---------------------
        int fila,columna;
        char nuevo;
        cout<<"Ingrese cordenadas para cambiar: "<<endl;

        cout<<"filas: ";
        cin>>fila;
        cout<<"columnas: ";
        cin>>columna;

        cout<<"Ingrese nuevo valor: ";
        cin>>nuevo;
        numero[fila][columna] = nuevo;

        mostrar();


    }

    if(opciones==2){  //se cambia el asiento que estaba ocupado con un desocupado "+"

        int fila,columna;
        char nuevo;


        cout<<"Ingrese cordenadas para eliminar: "<<endl;

        cout<<"filas: ";
        cin>>fila;
        cout<<"columnas: ";
        cin>>columna;

       // cout<<"Ingrese el +: ";
        //cin>>nuevo;
        nuevo = '-';

        numero[fila][columna] = nuevo;


        mostrar();
    }

    getch(); //evita que se cierre sin verla


    cout<<"ingrese el numero de la siguiente accion: ";
    cin>>opciones;
    } //final del ciclo
}
