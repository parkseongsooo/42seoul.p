/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:30:13 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 16:49:13 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_putstr_non_printable(char *str);
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
}
