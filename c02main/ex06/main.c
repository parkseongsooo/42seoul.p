/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:44:05 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 17:45:35 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_str_is_printable(char *str);
int main(void)
{
	printf("%d %d", ft_str_is_printable("\na"),ft_str_is_printable("ss"));
}

