/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:43:57 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/19 16:58:38 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	printf("ex00------------------------------------------------------------------------\n\n");
	int a = 5;
	int *ptr;
	ptr= &a;

	ft_ft(ptr);
	printf("yours : %d\n", a);
	printf("answer : 42\n");

	printf("\n");
}