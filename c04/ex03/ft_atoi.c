/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:51:00 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/30 15:49:31 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	white_space(char *str1, int *str2)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while ((str1[i] >= 9 && str1[i] <= 13) || str1[i] == 32)
		i++;
	while (str1[i] != '\0' && (str1[i] == '+' || str1[i] == '-'))
	{
		if (str1[i] == '-')
		{
			count *= -1;
		}
		i++;
	}
	*str2 = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	white;
	int	count;
	int	i;

	count = 0;
	white = white_space(str, &i);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		count *= 10;
		count += str[i] - '0';
		i++;
	}
	count *= white;
	return (count);
}
