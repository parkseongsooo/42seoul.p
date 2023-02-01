/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:11:57 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/16 17:34:30 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	swap;

	i = 0;
	k = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[k];
		tab[k] = swap;
		i++;
		k--;
	}
}
