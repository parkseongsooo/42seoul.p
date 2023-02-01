/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilko <dlftjdgg@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:52:04 by ilko              #+#    #+#             */
/*   Updated: 2023/01/28 16:36:37 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "../c08/ex04/ft_strs_to_tab.c"
#include "../c08/ex05/ft_show_tab.c"

int main()
{
	char *str[4];

	str[0] = "abcd";
	str[1] = "hello";
	str[2] = "bbbbb";
	str[3] = "ccccc";
	
	ft_show_tab(ft_strs_to_tab(4, str));
}
