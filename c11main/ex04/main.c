#include <stdio.h>
#include <stdlib.h>
int ft_is_sort(int *tab, int length, int(*f)(int, int));
int        ft_tri(int a, int b)
{
    return (a - b);
}

int        main(void)
{
    static int    tabx[] = { 7, 6, 6, 6, 5, 5, 4, 4, 3, 1, 1, 0, 0 };
    int            index;
    int            *tab;
    int            length;

    length = 7;

    printf("%d\n", ft_is_sort(tabx, length, &ft_tri));

}
