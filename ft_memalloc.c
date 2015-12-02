#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *new;

	new = (void *)malloc(sizeof((size_t)size));
	if (new == NULL)
		return (NULL);
	else
	{
		ft_memset(new, 0, size);
		return (new);
	}
}
