#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*new;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	new = (char *)malloc(sizeof(ft_strlen((char *)s) + 1));
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
