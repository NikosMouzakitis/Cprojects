#include <stdio.h>


int numerocifras(int n)
{
	int numero=n, cifras;

	if (numero < 0)
	{
		numero*=-1;
	}else if (numero == 0)
	{
		cifras=1;
	}

	for (cifras=0; numero > 0; cifras++)
	{
		numero/=10;
	}

	return cifras;
}

int main()
{
	int Num, ccfras=0;

	printf("Esta funcion calcula la cantidad de cifras de un numero\n");
	printf("\n");
	printf("Digite un numero el cual desea conocer su cantidad de cifras: \n");
	scanf("%d", &Num);
	ccfras=numerocifras(Num);
	printf("La cantidad de cifras es: %d\n", numerocifras(Num) );
	return 0;
}