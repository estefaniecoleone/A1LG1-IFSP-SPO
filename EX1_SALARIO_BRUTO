#include <stdio.h>
#include <conio.h>

//A partir da entrada da quantidade de horas trabalhadas e do valor da hora trabalhada, calcule e exiba
//o salário bruto, o valor do desconto do INSS e o salário líquido.

int main()
{ 
	float HT, VHT, SB;
	// HT = HORAS TRABALHADAS; VHT = VALOR HORAS TRABALHADAS; SB = SALÁRIO BRUTO
	printf ("=============================================");
	printf (" \nDigite a quantidade de horas trabalhadas: ");
	scanf("%f", &HT);
	printf(" \nDigite o valor da hora trabalhada: ");
	scanf("%f", &VHT);
	
	SB = HT * VHT;
	
	printf ("\n======================================================");
	printf(" \n\tCalculo de Salario Liquido");
	printf ("\n======================================================");
	printf("\n Horas trabalhadas.......................:    %2.0f", HT);
	printf("\n Valor da hora trabalhada................: R$ %2.2f", VHT);
	printf("\n Salario Bruto...........................: R$ %0.2f", SB);
	printf("\n Valor do desconto INSS (8)..............: R$ %0.2f", SB - (SB * 0.92));
	printf("\n Salario Liquido.........................: R$ %0.2f", SB - (SB * 0.08));
	printf ("\n======================================================");
  
getch();
}
