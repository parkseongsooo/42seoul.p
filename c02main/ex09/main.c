/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:48:36 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/24 19:35:51 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strcapitalize(char *str);
int main(void)
{
	char ex09[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante-et+un";
	printf("%s",ft_strcapitalize(ex09));
}
