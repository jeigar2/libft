#include "../src/libft.h"
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char	letra = 'a';
	char	letraM = 'H';
	char	numero = '8';
	printf("real: %c %d\n",letra, isalnum(letra));
	printf("mio-: %c %d\n",letra, ft_isalnum(letra));
	printf("real: %c %d\n",letraM, isalnum(letraM));
	printf("mio-: %c %d\n",letraM, ft_isalnum(letraM));
	printf("real: %c %d\n",numero, isalnum(numero));
	printf("mio-: %c %d\n",numero, ft_isalnum(numero));
	return (0);
}