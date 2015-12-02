#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof((size_t)size + 1));
	if (new == NULL)
		return (NULL);
	else
	{
		while (new[i])
		{
			new[i] = '\0';
			i++;
		}
	new[i] = '\0';
	}
	return (new);
}
