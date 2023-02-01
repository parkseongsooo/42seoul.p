/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:14:13 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 14:16:33 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_str_is_numeric(char *str);
int main(void)
{
	printf("%d %d %d", ft_str_is_numeric("a1b"),ft_str_is_numeric("abc"), ft_str_is_numeric("a\n4"));
}
