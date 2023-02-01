#include <stdio.h>
#include<stdlib.h>
int *ft_map(int *tab, int length, int(*f)(int));
int ft_add(int a)
{
	return (a + 2);
}
int main (void)
{
	int	i;
	int *tab;
	int length;
	int *res;

	tab = malloc(length * sizeof(int));
	length = 10;
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	res = ft_map(tab, length, &ft_add);
	i = 0;
	while ( i < length)
	{
		printf( "%i", res[i]);
		i++;
	}
}
