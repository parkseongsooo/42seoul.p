/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:53:59 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 17:56:12 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char	d[10] = "abcabcabc";
	char	src[5] = "hello";
	ft_strlcpy(d, src, 3);
	printf("%s", d);
}
