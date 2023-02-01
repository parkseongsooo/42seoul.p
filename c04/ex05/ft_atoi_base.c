/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:25:10 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/25 17:22:06 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	error_find(char *str)
{
	int	i;
	int	j;
	int	k;

	k = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || k == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	white_spaces(char *str, int *str2)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*str2 = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		white;
	int		nb;
	int		nb2;
	int		error;

	nb = 0;
	i = 0;
	error = error_find(base);
	if (error >= 2)
	{	
		white = white_spaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * error) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= white);
	}
	return (0);
}
