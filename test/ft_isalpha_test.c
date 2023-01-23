#include "../src/libft.h"
#include<stdio.h>
#include<ctype.h>



int main(void)
{
	char	letra = 'a';
	char	letraM = 'H';
	char	numero = '8';
	printf("real: %c %d\n",letra, isalpha(letra));
	printf("mio-: %c %d\n",letra, ft_isalpha(letra));
	printf("real: %c %d\n",letraM, isalpha(letraM));
	printf("mio-: %c %d\n",letraM, ft_isalpha(letraM));
	printf("real: %c %d\n",numero, isalpha(numero));
	printf("mio-: %c %d\n",numero, ft_isalpha(numero));
	return (0);
}
