#include "../src/libft.h"
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	for (int i = 0; i <= 127; i++)
	{
		printf("real: %c %d %d\n",i, i, isascii(i));
		printf("mio-: %c %d %d\n",i, i, ft_isascii(i));
	}
	return (0);
}
