#include "../src/libft.h"
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char	letra = 'a';
	char	letraM = 'H';
	char	numero = '8';
	printf("real: %c %d\n",letra, isdigit(letra));
	printf("mio-: %c %d\n",letra, ft_isdigit(letra));
	printf("real: %c %d\n",letraM, isdigit(letraM));
	printf("mio-: %c %d\n",letraM, ft_isdigit(letraM));
	printf("real: %c %d\n",numero, isdigit(numero));
	printf("mio-: %c %d\n",numero, ft_isdigit(numero));
	return (0);
}