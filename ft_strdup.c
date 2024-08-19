

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	i = ft_strlen(s);
	d = malloc(sizeof(char) * (i + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
