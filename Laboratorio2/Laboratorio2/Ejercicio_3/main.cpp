#include <iostream>


using namespace std;

int main () {

string palabra1, palabra2, verifica;

int s; s=0;



cin>>palabra1;
cin>>palabra2;

while (palabra1[s]>palabra1[-1] or palabra2[s]>palabra2[-1]){

    if(palabra1[s]==palabra2[s]){
       verifica = "verdadero";
    }
    else{
        verifica = "falso";
        break;
    }
    s+=1;


}
cout<<verifica;
}




