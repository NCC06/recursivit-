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
	return resultat;
}


int ft_facto_recursivite(int nombre)
{
    int resultat = 0;
    if (nombre == 1)
    {
        resultat = 1;
        return resultat;
    }
    else
    {
        resultat = nombre * ft_facto_recursivite(nombre - 1); 
        return resultat;
    }
}

int main (void)
{
	printf("resultat boucle : %d\n", ft_facto_boucle(6));
	printf("resultat recursivité: %d\n", ft_facto_recursivite(6));

}
