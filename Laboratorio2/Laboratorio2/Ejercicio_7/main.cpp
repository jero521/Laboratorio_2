#include <stdio.h>
#include <string.h>
#include <iostream>



int main()
{
    char resultado[27]="";  //abecedario
    char frase[50];

    int i=0,j=0;
    printf("Ingresa una frase: ");scanf("%s",frase);


    //recore toda la frase
    while(frase[i])
    {
        //busca la ocurrencia de un string
        if(!strchr(resultado,frase[i]))
            resultado[j++]=frase[i];
        i++;
    }
    resultado[j]='\0'; //NULL (imprime hasta llegar ahi)
    printf("\nEl resultado seria!\n%s",resultado);

    getchar(); //funcion de una cadena de varios caracteres, lee en orden escrito
   return(0);
}
