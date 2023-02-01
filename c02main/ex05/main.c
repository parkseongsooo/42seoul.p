/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:41:23 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 17:45:48 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_str_is_uppercase(char *str);
int main(void)
{
	printf("%d %d ",ft_str_is_uppercase("abc"),ft_str_is_uppercase("aA"));
}
