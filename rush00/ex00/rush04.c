/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunghki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:15:08 by hyunghki          #+#    #+#             */
/*   Updated: 2023/01/18 13:14:15 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char st, char middle, char en, int x_num)
{
	ft_putchar(st);
	x_num--;
	if (x_num == 0)
	{
		ft_putchar('\n');
		return ;
	}
	while (x_num > 1)
	{
		ft_putchar(middle);
		x_num--;
	}
	ft_putchar(en);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (!(x > 0 && y > 0))
	{
		return ;
	}
	ft_print_line('A', 'B', 'C', x);
	y--;
	if (y == 0)
	{
		return ;
	}
	while (y > 1)
	{
		ft_print_line('B', ' ', 'B', x);
		y--;
	}
	ft_print_line('C', 'B', 'A', x);
}
