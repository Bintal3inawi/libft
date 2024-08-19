

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*p;

	d = (unsigned char *)dest;
	p = (unsigned char *)src;
	if (d == NULL && p == NULL)
		return (0);
	i = 0;
	if (d < p)
	{
		while (n > i)
		{
			d[i] = p[i];
			i++;
		}
	}
	else
	{
		while (n > i++)
		{
			d[n - i] = p[n - i];
		}
	}
	return (dest);
}
