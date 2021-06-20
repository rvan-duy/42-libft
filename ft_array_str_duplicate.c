/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_str_duplicate.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/20 15:08:08 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/06/20 16:07:18 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_strdup(char **dst, char **src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = ft_strdup(src[i]);
		if (dst[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				ft_free(&dst[i]);
			}
			dst = NULL;
			return ;
		}
		i++;
	}
}
