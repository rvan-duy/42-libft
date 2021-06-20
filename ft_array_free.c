/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_free.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/20 14:12:48 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/06/20 14:23:39 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_free(void **array, size_t len)
{
	while (len > 0)
	{
		len--;
		ft_free(array[len]);
	}
	ft_free(array);
}
