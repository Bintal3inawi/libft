
#include "libft.h"

char	*ft_strrchr(const char *p, int c)
{
	char	*s;
	int		i;

	i = 0;
	s = NULL;
	while (p[i])
	{
		if (p[i] == (char)c)
		{
			s = ((char *)p + i);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)p + i);
	return (s);
}
