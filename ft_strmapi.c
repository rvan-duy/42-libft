/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ruben <rvan-duy@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 20:30:28 by ruben         #+#    #+#                 */
/*   Updated: 2020/11/12 15:31:25 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	newstr = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!newstr)
		return (NULL);
	while (str[i] != '\0')
	{
		newstr[i] = f(i, str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
