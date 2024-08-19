
#include "libft.h"

int	intcount(int num)
{
	int	i;

	i = 0;
	if (num < 0)
		i++;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				c;
	char			*str;

	c = intcount(n);
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[c] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (num)
	{
		str[--c] = num % 10 + 48;
		num = num / 10;
	}
	return (str);
}
