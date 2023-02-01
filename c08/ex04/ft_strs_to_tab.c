/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:59:11 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/28 15:32:45 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (!d)
		return (0);
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*d;

	d = (malloc((ac + 1) * sizeof(struct s_stock_str)));
	if (!d)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		d[i].size = ft_str_length(av[i]);
		d[i].str = av[i];
		d[i].copy = ft_strdup(av[i]);
		i++;
	}
	d[i].str = 0;
	d[i].copy = 0;
	return (d);
}
