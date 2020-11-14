/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 13:37:58 by rvan-duy      #+#    #+#                 */
/*   Updated: 2020/10/31 14:27:13 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;

	i = 0;
	destination = dst;
	source = src;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == ((char)c))
			return (destination + i + 1);
		i++;
	}
	return (NULL);
}
