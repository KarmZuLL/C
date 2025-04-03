#include <stdio.h>

main ()
{
	float l,c, ar;
	printf("Calcula Area de Terrenos \n\n");
	printf("Digite a largura do terreno: ");
	scanf("%f", &l);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &c);
	ar = l*c;
	printf("Area = %.2f\n\n", ar);
	system ("pause");
}
