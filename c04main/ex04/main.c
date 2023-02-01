#include<stdio.h>
void	ft_putnbr_base(int nbr, char *base);
int main(void)
{
	printf("\n----ex04----\n");
	printf("  --base에 문제가 있는 경우 : 출력되는 것이 없어야 함--\n");
	ft_putnbr_base(123, "");
	printf("\nnbr : 123, base : null\n");
	ft_putnbr_base(123, "1");
	printf("\nnbr : 123, base : 1\n");
	ft_putnbr_base(123, "1123");
	printf("\nnbr : 123, base : 1123\n");
	ft_putnbr_base(123, "+123");
	printf("\nnbr : 123, base : +123\n");
	printf("  --base에 문제가 없는 경우 : 출력되는 것이 있어야 함--\n");
	ft_putnbr_base(2147483647, "poneyvif");
	printf("\nnbr : 2147483647, base : poneyvif\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\nnbr : -2147483648, base : 0123456789abcdef\n");
	ft_putnbr_base(-342373, "jungyeki");
	printf("\nnbr : -342373, base : jungyeki\n");
}
