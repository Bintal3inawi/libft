
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	i = 0;
	j = 0;
	if (!dstsize)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	if (dlen < dstsize)
	{
		i = dlen;
		while (i < dstsize - 1 && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	else
		dlen = dstsize;
	return (dlen + ft_strlen(src));
}
