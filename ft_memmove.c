/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 17:34:05 by rvan-duy      #+#    #+#                 */
/*   Updated: 2020/11/14 17:47:24 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destination;
	unsigned char	*source;

	if (!dst || !src)
		return (NULL);
	if (!n)
		return(dst);
	i = 0;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (source > destination)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i >= 0)
		{
			destination[i] = source[i];
			i--;
		}
	}
	return (dst);
}
