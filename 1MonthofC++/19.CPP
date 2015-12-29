#include <math.h> 
#include<iostream>
#include <stdio.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) //Hace Rapido la lectura de datos, para maratones.
//Objetivo 
//19. Hacer un programa que lea un número entero de 2 dígitos y muestre los enteros comprendidos entre ambos dígitos.
int main(){
	int z,bz;
	printf("Ingrese un Entero de Dos Digitos\n");
	cin>>z;
	bz=z;
	 int cifras= 0;    //esta variable es el contador de cifras
     while(z!=0){             //mientras a n le queden cifras
        z = z/10;         //le quitamos el último dígito
        cifras++;          //sumamos 1 al contador de cifras
        }
      if(cifras ==2){
      	for(bz;)
      }
      else{
      	printf("El numero Posee mas Cifras, o Menos Cifras.\n\b [!] Recuerda son DOS");

      }
	return 0;
}
