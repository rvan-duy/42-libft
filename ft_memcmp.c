/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ruben <rvan-duy@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:19:39 by ruben         #+#    #+#                 */
/*   Updated: 2020/11/19 21:19:57 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)str1)[i] != ((unsigned char*)str2)[i])
			return (((unsigned char*)str1)[i] - ((unsigned char*)str2)[i]);
		i++;
	}
	return (0);
}
