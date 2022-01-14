#include <iostream>
#include <stdio.h>  //scanf, printf
#include <cstdio>  //para el sprinf
using namespace std;

int num(int n){  //funcion que separa el numero en n, tiene que resibir un numero entero
    int j=n;
    int Total1=0;
    int Jum = 10;
    if (n==1){
        Jum = 10;
        return Jum;
    }
    while(j!=1){

        Jum=Jum*10;
        j--;
       Total1=Jum;
    }
    return Total1;

}



int main()
{
int a,n,pe,total;
pe=0;  //contador
total=0;

printf("Ingrese la cadena: ");scanf("%i", &a);
char s[32];

int len = sprintf(s, "%d", a); //numero de digitos %d modo int
printf("Ingrese un numero entero: ");scanf("%i", &n);

cout<<"Original: "<<a<<endl;



int va=num(n);

int value = a;
while (value > 0) {
 int digit = value % va;
 pe+=1;

 if(pe<=n){
     total+=digit;

 pe=0;}
 value /= va;
}
cout<<"Suma: "<<total<<endl;



}
