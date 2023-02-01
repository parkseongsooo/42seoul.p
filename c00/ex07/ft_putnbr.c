/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:40:10 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/15 18:33:28 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		x = 147483648;
	}
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
	}	
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putchar(x % 10 + '0');
	}
	else
	{
		ft_putchar(x + '0');
	}
}
