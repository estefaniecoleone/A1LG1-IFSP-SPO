#include <stdio.h>  
#include <conio.h>  

int main()  
{ float REAL, DOLAR, EURO, PESO, IENE;  

	printf(" Digite o valor em Reais............: ");  
	scanf("%f", &REAL);  

	printf(" Digite a cotacao do Dolar..........: ");  
	scanf("%f", &DOLAR);  

	printf(" Digite a cotacao do Euro...........: ");  
	scanf("%f", &EURO);  

	printf(" Digite a cotacao do Peso...........: ");  
	scanf("%f", &PESO);  

	printf(" Digite a cotacao do Iene...........: ");  
	scanf("%f", &IENE); 

	printf("\n A conversao para dolar eh..........: %.4f", REAL * DOLAR);  
	printf("\n A diferenca pro valor em real eh...: %.4f", (REAL * DOLAR) - REAL);  
	printf("\n \n A conversao para euro eh...........: %.4f", REAL  * EURO);  
	printf("\n A diferenca pro valor em real eh...: %.4f", (REAL * EURO) - REAL);  
	printf("\n \n A conversao para peso eh...........: %.4f", REAL * PESO);  
	printf("\n A diferenca pro valor em real eh...: %.4f", REAL - (REAL * PESO));   
	printf("\n \n A conversao para iene eh...........: %.4f", REAL  * IENE);  
	printf("\n A diferenca pro valor em real eh...: %.4f", REAL - (REAL * IENE));  

getch();  
 
} 
