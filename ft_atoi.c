
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	c;
	int	value;

	i = 0;
	c = 0;
	sign = 1;
	value = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -sign;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + str[i++] - 48;
		if (++c == 19 && sign == 1)
			return (-1);
		if (c == 19 && sign == -1)
			return (0);
	}
	return (sign * value);
}
