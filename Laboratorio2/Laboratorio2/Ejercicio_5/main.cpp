#include <iostream>
#include <string> //funcion para la conversion de int a str

using namespace std;



int number;


int main()
{
    cout<<"Ingrese un numero entero ";
    cin>>number;

    string  s = (std::to_string(number));
    string* ad = &s;


    cout<<*ad<<endl;

    return 0;
}
