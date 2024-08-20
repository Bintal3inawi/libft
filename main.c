#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("-----------------------");
    printf("ft_strlen(\"abc\"): %ld\nstrlen(\"abc\"): %ld\n",ft_strlen("abc"),strlen("abc"));
    printf("-----------------------");

    printf("-----------------------\n");
    printf("ft_atoi(\"42\"): %d\natoi(\"42\"): %d\n", ft_atoi("42"), atoi("42"));
    printf("-----------------------\n");

    printf("-----------------------\n");
    printf("ft_isalnum('a'): %d\nisalnum('a'): %d\n", ft_isalnum('a'), isalnum('a'));
    printf("-----------------------\n");

    char str1[] = "Hello";
    char str2[] = "Hello";

    ft_bzero(str1, 3);
    bzero(str2, 3);

    printf("-----------------------\n");
    printf("ft_bzero result: %s\nbzero result: %s\n", str1, str2);
    printf("-----------------------\n");
}