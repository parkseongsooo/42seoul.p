/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunghki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:06:15 by hyunghki          #+#    #+#             */
/*   Updated: 2023/01/18 15:25:12 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_atoi(char *target)
{
	int	idx;
	int	result;

	idx = 0;
	result = 0;
	while (target[idx] != '\0')
	{
		result *= 10;
		result += target[idx] - '0';
		idx++;
	}
	return (result);
}

int	ft_is_int_over(char *target)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (target[i] == "2147483647"[i])
		{
			i++;
			continue ;
		}
		return (target[i] > "2147483647"[i]);
	}
	return (0);
}

int	ft_is_number(char *target)
{
	int	i;

	i = 0;
	while (target[i])
	{
		if (i == 9 && ft_is_int_over(target))
		{
			return (0);
		}
		if (i > 9)
		{
			return (0);
		}
		if (!(target[i] >= '0' && target[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		return (0);
	}
	if (!ft_is_number(argv[1]) || !ft_is_number(argv[2]))
	{
		return (0);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
