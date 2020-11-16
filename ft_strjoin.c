/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 17:55:40 by rvan-duy      #+#    #+#                 */
/*   Updated: 2020/11/16 12:47:52 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		s1len;
	int		s2len;
	
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	newstr = ft_calloc(s1len + s2len + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, s1len);
	ft_strlcat(newstr, s2, s2len + 1);
	return (newstr);
}
