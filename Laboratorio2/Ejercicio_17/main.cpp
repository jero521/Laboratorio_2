#include <iostream>
#include <math.h> // potencia


using namespace std;


int Num_amigos(int n)
{
   int j = (int)sqrt((n));
   int suma = 1;

   for(int i=2; i < j; i++)

{
      if(n%i==0)
        suma = suma + i + n/i;
   }
   if(n and j == 0)
     suma = suma + j;
   return suma;
}



int main()
{
    int sum =0;
    int Num=0, Num_max = 1000;

    int a = 0;
    int b = 0;
    int cont = 1;
    cout<<"Ingrese un numero: ";cin>>Num;

    for(a=0; cont<Num_max+1; a++)
    {
       b = Num_amigos(a);
       if(b>a and Num_amigos(b)==a){

          if(a and b<Num){

          cout << cont << endl;
          cout << "Numero 1: " << a << "  Numero 2: " << b << endl;
          cont++;
          sum+=a+b;

          cout<<"Suma total: "<<sum<<endl<<endl;

          }
          else break;
       }
    }




       return 0;

}

