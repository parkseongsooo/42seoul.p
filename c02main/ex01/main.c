/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:32:28 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/17 14:00:16 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strncpy(char *dest,char *src, unsigned int n);
int	main(void)
{
	char src[6] = "Hello";
	char d1[10] = "abcabcabc";

	ft_strncpy(d1,src,3);
	printf("%s", d1);
	printf("%s", &d1[6]);
}
	
