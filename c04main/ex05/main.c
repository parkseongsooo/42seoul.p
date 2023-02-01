/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:30:38 by seongsop          #+#    #+#             */
/*   Updated: 2023/01/22 12:31:56 by seongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_atoi_base(char *str, char *base);
int main(void)
{
	printf("\n----ex05----\n");
      printf("  --base에 문제가 있는 경우 : 0이 출력되야 함--\n");
      printf("%d", ft_atoi_base("123", ""));
      printf("\nnbr : 123, base : null\n");
      printf("%d", ft_atoi_base("123", "1"));
      printf("\nnbr : 123, base : 1\n");
      printf("%d", ft_atoi_base("123", "1123"));
      printf("\nnbr : 123, base : 1123\n");
      printf("%d", ft_atoi_base("123", "+123"));
      printf("\nnbr : 123, base : +123\n");
      printf("  --base에 문제가 없는 경우 : 출력되는 것이 있어야 함--\n");
      printf("%d", ft_atoi_base("offffffffff", "poneyvif"));
      printf("\nstr : offffffffff, base : poneyvif\n");
      printf("%d", ft_atoi_base("-80000000","0123456789abcdef"));
      printf("\nstr : -80000000, base : 0123456789abcdef\n");
      printf("%d", ft_atoi_base("    ----++---+jungyeye0224", "jungyeki"));
      printf("\nstr :     ----++---+jungyeye0224, base : jungyeki\n");
}
