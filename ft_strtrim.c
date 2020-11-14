/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ruben <rvan-duy@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:34:32 by ruben         #+#    #+#                 */
/*   Updated: 2020/11/12 15:46:28 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*makenewstring(char *originalstr, char *newstr, int begin, int end)
{
	int i;

	i = 0;
	while (i < (end - begin + 1))
	{
		newstr[i] = originalstr[i + begin];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static int	ispartofset(char *setter, char c)
{
	int i;

	i = 0;
	while (setter[i] != '\0')
	{
		if (setter[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	findstart(char *str, char *setter)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ispartofset(setter, str[i]) != 1)
			return (i);
		i++;
	}
	return (i);
}

static int	findend(char *str, char *setter)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i != 0)
	{
		if (ispartofset(setter, str[i]) != 1)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	int		begin;
	int		end;
	char	*str1;
	char	*setter;
	char	*newstr;

	str1 = (char *)s1;
	setter = (char *)set;
	if (!str1)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(str1));
	begin = findstart(str1, setter);
	end = findend(str1, setter);
	if (begin > end)
	{
		newstr = malloc(sizeof(char));
		newstr[0] = '\0';
		return (newstr);
	}
	newstr = malloc(sizeof(char) * (end - begin) + 2);
	if (newstr == NULL)
		return (NULL);
	makenewstring(str1, newstr, begin, end);
	return (newstr);
}
