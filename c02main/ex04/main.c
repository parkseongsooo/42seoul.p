/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:26:38 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 17:40:59 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_str_is_lowercase(char *str);
int main(void)
{
	printf("%d %d %d\n", ft_str_lowercase("a12"), ft_str_lowercase(""),ft_str_lowercase("AB"));
}
