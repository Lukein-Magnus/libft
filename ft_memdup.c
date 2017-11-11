#include "libft.h"

void	*ft_memdup(const void *s, size_t n)
{
	char	*new;
	size_t	i;
	
	if (!s && !(ft_memalloc(new, n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		new[i] = ((char *)s)[i];
		i++;
	}
	return (new);
}