#include <stdio.h>
#include <stdlib.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}
int main (void)
{
	char **array;
	int	i;

	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = "A";
	array[3] = "0";
	printf("%d\n", ft_count_if(array, 3, ft));
}
