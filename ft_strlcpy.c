/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ruben <rvan-duy@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 11:06:17 by ruben         #+#    #+#                 */
/*   Updated: 2020/11/03 14:19:37 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	while (src[j] != '\0')
	{
		if (i < n - 1 && n > 0)
		{
			dst[i] = src[i];
			i++;
		}
		j++;
	}
	if (!n)
		return (j);
	dst[i] = '\0';
	return (j);
}
