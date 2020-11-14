/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:12:21 by rvan-duy      #+#    #+#                 */
/*   Updated: 2020/11/14 17:29:47 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	countwords(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (count);
}

static int	findstart(char *s, char c, int i)
{
	while (s[i])
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (i);
}

static int	findlen(char *str, char c, int start)
{
	int i;

	i = 0;
	while (str[start] != c && str[start] != '\0')
	{	
		i++;
		start++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**finalstr;
	char 	*str;
	int		arraylen;
	int 	start;
	int 	len;
	int		i;

	if (!s)
		return (NULL);
	arraylen = countwords((char *)s, c);
	finalstr = ft_calloc(arraylen + 1, sizeof(char *));
	if (!finalstr)
		return (NULL);
	str = (char *)s;
	i = 0;
	start = 0;
	len = 0;
	while (i < arraylen)
	{
		start = findstart(str, c, start + len);
		len = findlen(str, c, start);
		finalstr[i] = ft_substr(s, start, len);
		if (!finalstr[i])
		{
			while (i >= 0)
			{
				i--;
				free(finalstr[i]);
			}
			free(finalstr);
			return (NULL);
		}
		//printf("s:%d l:%d i:%d (%s)\n", start, len, i, finalstr[i]);
		i++;
	}
	return (finalstr);
}
