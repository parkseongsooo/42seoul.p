#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void ft_sort_string_tab(char **tab);
int		main(void)
{
	int		index;
	char	**tab;

	tab = malloc(5 * sizeof(char *));
	tab[0] = "9";
	tab[1] = "4";
	tab[2] = "3";
	tab[3] = "2";
	tab[4] = "f";
	tab[5] = "a";
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] = %s\n", index, tab[index]);
		index++;
	}
	ft_sort_string_tab(tab);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] = %s\n", index, tab[index]);
		index++;
	}
}
