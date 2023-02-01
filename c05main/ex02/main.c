#include <stdio.h>

int	ft_iterative_power(int nb, int power);
int	main(void)
{
	printf("%d ^ %d = %d\n", 2850, -2498, ft_iterative_power(2850, -2498));
printf("%d ^ %d = %d\n", 0, 0, ft_iterative_power(0, 0));
printf("%d ^ %d = %d\n", -2341, 0, ft_iterative_power(-2341, 0));
printf("%d ^ %d = %d\n", 1538, 1, ft_iterative_power(1538, 1));
printf("%d ^ %d = %d\n", 0, 2, ft_iterative_power(0, 2));
printf("%d ^ %d = %d\n", 5, 3, ft_iterative_power(5, 3));
printf("%d ^ %d = %d\n", -7, 4, ft_iterative_power(-7, 4));
printf("%d ^ %d = %d\n", -5, 5, ft_iterative_power(-5, 5));
printf("%d ^ %d = %d\n", -4, 6, ft_iterative_power(-4, 6));
printf("%d ^ %d = %d\n", -3, 7, ft_iterative_power(-3, 7));
printf("%d ^ %d = %d\n", -1, 10, ft_iterative_power(-1, 10));
}
