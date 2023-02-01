/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:27:53 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/29 17:17:04 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	d = malloc(size * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		d[i] = min + i;
		i++;
	}
	*range = d;
	return (size);
}
