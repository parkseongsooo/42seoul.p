/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:53:50 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 14:09:02 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_str_is_alpha(char *str);
int main(void)
{
	printf("%d %d %d",ft_str_is_alpha("abc"), ft_str_is_alpha(" "), ft_str_is_alpha("ab\n"));
}

