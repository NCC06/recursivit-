#include <stdlib.h>
#include <stdio.h>

int ft_facto_boucle(int nombre)
{
	int resultat = nombre;
	while (nombre != 1)
	{
		resultat *= nombre-1;
		nombre--;
	}
	printf("resultat boucle : %d\n", resultat);
	return resultat;
}


int ft_facto_recursivite(int resultat ,int nombre) 
// Mettre 1 dans resultat
{
	if (nombre != 1)
	{
		resultat *=  nombre;
		ft_facto_recursivite(resultat, nombre-1);
	}

	else
	{
		printf("resultat recursivité: %d\n", resultat);	
	}
	return resultat;
}

int main (void)
{
	ft_facto_boucle(5);
	ft_facto_recursivite(1, 5);

}
