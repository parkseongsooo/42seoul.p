#include <stdio.h>
int	ft_find_next_prime(int nb);
int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
} 
