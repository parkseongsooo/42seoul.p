find . -name "*.c" -type f -exec gcc -c -Wall -Werror -Wextra  {} \;
ar rc libft.a *.o
