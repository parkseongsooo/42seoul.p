/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:52:14 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/21 19:57:34 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printall(char c[], int n)
{
	int	count;

	count = 0;
	while (count < n)
		ft_putchar(c[count++]);
}

void	ft_call(char c[], int n)
{
	int	count;
	int	value;
	int	flag;

	flag = 0;
	count = n;
	while (count >= 2)
	{
		if (c[count - 1] > '0' + 8 - (n - count))
		{
			if (count != n && c[count - 1] == '0' + 9 - (n - count))
				break ;
			flag = 1;
			c[count - 2]++;
			value = count - 1;
			while (value <= n)
			{
				c[value] = c[value - 1] + 1;
				value++;
			}
		}
		count --;
	}
	if (flag == 0)
		c[n - 1]++;
}

void	ft_print_combn(int n)
{
	char	arr[10];
	int		i;

	i = 0;
	while (i <= 8)
	{
		arr[i] = i + '0';
		i++;
	}
	while (arr[0] <= '0' + 10 - n)
	{
		ft_printall(arr, n);
		if (!(arr[0] == '0' + 10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_call(arr, n);
	}
}
