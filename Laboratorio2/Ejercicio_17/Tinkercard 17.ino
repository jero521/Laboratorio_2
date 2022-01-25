// C++ code
//

void setup(){
   Serial.begin(9600); 
}

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


  


void loop()
{
   // delay(9600); // Delay a little bit to improve simulation performance
  
    int sum =0;
    int Num=0, Num_max = 1000;

    int a = 0;
    int b = 0;
    int cont = 1;

    Serial.print("Ingrese un numero: ");
    delay(5000);
    Num=Serial.parseInt();
  

    for(a=0; cont<Num_max+1; a++)
    {
       b = Num_amigos(a);
       if(b>a and Num_amigos(b)==a){

          if(a and b<Num){
          /*
          Serial.print( cont + "\n");
          Serial.print("Numero 1: ");
          Serial.print(a);
          Serial.print("Numero 2: ");
          Serial.print(b + "\n");
            */
          cont++;
          sum+=a+b;

          Serial.print("Suma total: ");
          Serial.print(sum);
          Serial.print("\n""\n");

          }
          else break;
       }
    }




       //return 0;
}