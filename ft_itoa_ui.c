#include "libft.h"

char	*ft_itoa_ui(unsigned int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_digitcount_ui(n);
	str = (char *)ft_calloc(sizeof(*str), len + 1);
	if (str == NULL)
		return (NULL);
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
