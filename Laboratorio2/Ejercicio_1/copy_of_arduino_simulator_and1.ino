
long int money,cinc,result;

void setup()
{
Serial.begin(9600);
}

void loop()
{
Serial.print("Ingrese la cantidad de dinero: ");
  delay(10000);
if(Serial.available()){ 	 //se verifica si hay un dato en el puerto serial
    money = Serial.parseInt();		 //se almacena el dato escrito en la variable money
    Serial.println(money);		//se imprime el dato de la variable money 
 

 

cinc = money / 50000;
Serial.print("50000 : ");
Serial.println(cinc);
  
result = money % 50000;
  delay(1000);


cinc = result / 20000;
Serial.print("20000 : ");
Serial.println(cinc);
  
money = result % 20000;
  delay(1000);
  

cinc = money / 10000;
Serial.print("10000 : ");
Serial.println(cinc);
  
result = money % 10000;
  delay(1000);

cinc = result / 5000;
Serial.print("5000 : ");
Serial.println(cinc);
  
money = result % 5000;
  delay(1000);

cinc = money / 2000;
Serial.print("2000 : ");
Serial.println(cinc);
  
result = money % 2000;
  delay(1000);

cinc = result / 1000;
Serial.print("1000 : ");
Serial.println(cinc);
  
money = result % 1000;
  delay(1000);

cinc = money / 500;
Serial.print("500 : ");
Serial.println(cinc);
  
result = money % 500;
  delay(1000);

cinc = result / 200;
Serial.print("200 : ");
Serial.println(cinc);
  
money = result % 200;
  delay(1000);

cinc = money / 100;
Serial.print("100 : ");
Serial.println(cinc);
  
result = money % 100;
  delay(1000);

cinc = result / 50;
Serial.print("50 : ");
Serial.println(cinc);
  
money = result % 50;
  delay(1000);

Serial.print("Faltante : ");
Serial.println(money);
  delay(1000);
}
}

