#include<stdio.h>
int	ft_atoi(char *str);
int main(void)
{
	printf("\n----ex03----\n");
	printf("\n%d :       ---+--+1234ab567을 넣었을 때\n", ft_atoi("      ---+--+1234ab567"));
	printf("\n%d : jungyeki(숫자가 아닌 문자열)를 넣었을 때\n", ft_atoi("jungyeki"));

}
