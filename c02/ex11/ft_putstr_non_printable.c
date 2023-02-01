/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:35:23 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/24 16:29:27 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_hex(unsigned char c)
{
	char	*hex;
	char	arr[3];

	hex = "0123456789abcdef";
	arr[0] = '\\';
	arr[1] = hex[c / 16];
	arr[2] = hex[c % 16];
	write(1, &arr, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
			ft_hex((unsigned) str[i]);
		i++;
	}
}
