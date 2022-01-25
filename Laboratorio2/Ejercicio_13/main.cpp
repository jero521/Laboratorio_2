#include <iostream>
#include <conio.h>  //getch()
#include <stdlib.h>  //new y delete espacios de memoria
#include <iomanip>  //setw(n) n numero de espacios
#include <stdio.h>

using namespace std;

int **puntero_m, filas , colum,a;

//************prototipo de funciones****************//
void datos_inicio(); //funcion que permite ingresar fotografias
void mostrar(int **, int, int); //funcion que permite mostrar la fotografia usando apuntadores





int main()
{
    int Sumas=0, s=7,x=5, estrellas=0;
    float total=0;

    cout<<"Que desea hacer 0 : utilizar la fotografia de la galaxia , 1 : utilizar otra fotografia: ";
    cin>>a;
    if(a==0){

    int posi_estrellas[6][8] ={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};


    printf("fotografia de la galaxia\n");
    for(int fil=0;fil<6;fil++){
        for(int col=0;col<8;col++){
            //cout<<setw(2);
            printf("[%2i]",posi_estrellas[fil][col]);
        }
        printf("\n");
    }

    int* ptr[6] = {posi_estrellas[0],posi_estrellas[1],posi_estrellas[2],posi_estrellas[3],posi_estrellas[4],posi_estrellas[5]};


    //---------------------busca en la fotografia las posibles estrellas------------------//

    for(int al=1;al<x;al++){

        for(int i=1;i<s;i++){
            Sumas=0;

            Sumas=Sumas+ptr[al][i];
        //    cout<< ptr[al][i]<<"-----------centro------------"<<endl;
            Sumas=Sumas+ptr[al][i-1];
        //   cout<< ptr[al][i-1]<<"----------izquierda----------"<<endl;
            Sumas=Sumas+ptr[al][i+1];
        //    cout<< ptr[al][i+1]<<"----------derecha-----------"<<endl;
            Sumas=Sumas+ptr[al-1][i];
        //    cout<< ptr[al-1][i]<<"----------arriba------------"<<endl;
            Sumas=Sumas+ptr[al+1][i];
        //   cout<< ptr[al+1][i]<<"----------abajo--------------"<<endl;


            total=Sumas;total=total/5;
        //   cout<<total<<"--------------"<<endl;

            if(total>6){

                estrellas+=1;

                }





        }
      //  cout <<"fila: "<<al<<endl;

    }
    cout<<"Numero de estrellas en la fotografia: "<<estrellas;

}







    if(a==1){

    datos_inicio();
    mostrar(puntero_m,filas, colum);


    //-------se quiere liberar el espacio de memoria que se hizo con el new en la matriz ya que es un arreglo de arreglos se nesesita un for--------//


    //se libera el espacio de memoria de las puntero filas
    for(int i=0; i<filas; i++){
        delete[]puntero_m[i];

    }
    //se libera el espesaio de memoria de las filas
    delete[]puntero_m;
    }
    getch();
    return 0;

}

//******************funcion que permite ingresar mas fotografias*************//
void datos_inicio(){
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;

    cout<<"Ingrese el numero de columnas :";
    cin>>colum;

    //-----------------se reserva memoria para la matriz---------------------------//
    puntero_m = new int*[filas];   //se esta reservando memoria para las filas
    for(int i=0; i<filas; i++){
        puntero_m[i] = new int[colum]; //se esta reservando memoria para las columnas

    }
    //permite ingresar culquier fotografia de galaxia
    cout<<endl<<"digite los elementos de la matriz "<<endl;
    for(int i=0; i<filas; i++){
        for(int j=0; j<colum; j++){
            cout<<"Ingrese un numero ["<<i<<"]["<<j<<"] :";
            cin>>*(*(puntero_m+i)+j);  //puntero_m guarda [i][j] pero con punteros

        }
    }

}

void mostrar(int **puntero_m,int filas,int colum){
    cout<<endl<<"Se imprime la matriz: "<<endl;
    for(int i=0; i<filas; i++){
        for(int j=0; j<colum; j++){
            cout<<setw(4)<<"["<<*(*(puntero_m+i)+j)<<"]"; //puntero_m imprime [i][j] pero con punteros

        }
        cout<<"\n";
    }
}












