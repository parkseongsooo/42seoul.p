/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:21:58 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/29 17:15:58 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_length(char *str)
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
	d = ((char *)malloc(ft_length(src) * sizeof(char) + 1));
	if (!d)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
