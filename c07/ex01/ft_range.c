/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:23:22 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/29 17:16:28 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = malloc(range * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (i < range)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
