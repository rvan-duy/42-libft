/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_append.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/08 19:01:40 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/06/08 19:26:53 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append(const char *dst, const char *src)
{
	size_t	len1;
	size_t	len2;
	char	*newstr;

	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	newstr = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, dst, len1);
	ft_memcpy(newstr + len1, src, len2);
	return (newstr);
}
