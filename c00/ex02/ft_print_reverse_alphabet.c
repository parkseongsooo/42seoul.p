/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <seongsop@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:18:07 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/15 14:03:05 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z ;

	z = 'z' ;
	while ('a' <= z)
	{
		write (1, &z, 1);
		z--;
	}
}
