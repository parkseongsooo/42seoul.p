/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:21 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/19 15:41:29 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;
	unsigned int	j;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = d_len;
	j = 0;
	while (src[j] != '\0' && (d_len + j + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (d_len < size)
	{
		return (s_len + d_len);
	}
	else
		return (s_len + size);
}
