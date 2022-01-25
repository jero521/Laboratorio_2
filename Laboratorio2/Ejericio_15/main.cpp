#include <iostream>


using namespace std;

int ancho,alto,a=0;
int numero[0][0];

//void mostrar(); //funcion para mostrar el primer troangulo

int main()
{
   // cout<<"Ingrese el ancho: ";cin>>ancho;
   // cout<<"Ingrese la altura: ";cin>>alto;

    int lav[4]={0,0,8,4};int lav1[4]={5,2,6,7};

    int result[4]={0,0,0,0};

    ancho=lav[2]; alto=lav[3];



result[0]=lav1[0]; //x
result[1]=lav1[1]; //y

result[2]=lav[2]-lav1[0];result[3]=lav[3]-lav1[1]; //ancho y altura



cout<<"{";

for(auto const& value : result){  //por referencia constante
        cout << value;
        if(a==3)break;
        a++;
        cout << ", ";


    }







cout<<"}";





    //mostrar();

    return 0;
}

/*
void mostrar(){

    for(int i=0 ; i<alto ; i++){
        for(int j=0 ; j<ancho ; j++){
            cout<<numero[i][j]<<" ";
        }
        cout<<"\n";
    }


}
*/
