#include <iostream>

using namespace std;

int main()
{
int money,cinc,result;
cout<<"Ingrese la cantidad de dinero: ";
cin>>money;

cinc = money / 50000;
cout<<"50000 : "<<cinc<<endl;
result = money % 50000;

cinc = result / 20000;
cout<<"20000 : "<<cinc<<endl;
money = result % 20000;

cinc = money / 10000;
cout<<"10000 : "<<cinc<<endl;
result = money % 10000;

cinc = result / 5000;
cout<<"5000 : "<<cinc<<endl;
money = result % 5000;

cinc = money / 2000;
cout<<"2000 : "<<cinc<<endl;
result = money % 2000;

cinc = result / 1000;
cout<<"1000 : "<<cinc<<endl;
money = result % 1000;

cinc = money / 500;
cout<<"500 : "<<cinc<<endl;
result = money % 500;

cinc = result / 200;
cout<<"200 : "<<cinc<<endl;
money = result % 200;

cinc = money / 100;
cout<<"100 : "<<cinc<<endl;
result = money % 100;

cinc = result / 50;
cout<<"50 : "<<cinc<<endl;
money = result % 50;

cout<<"Faltante : "<<money<<endl;



}
