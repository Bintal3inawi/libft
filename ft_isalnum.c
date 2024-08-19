
#include "libft.h"

int	ft_isalnum(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
	{
		return (1);
	}
	return (0);
}
