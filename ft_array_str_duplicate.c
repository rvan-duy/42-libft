/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_str_duplicate.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/20 15:08:08 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/06/20 15:21:11 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_array_str_duplicate(char **array, size_t array_len)
{
	char	**new_array;
	size_t	i;

	new_array = ft_calloc(array_len, sizeof(char *));
	if (new_array == NULL)
		return (NULL);
	i = 0;
	while (i < array_len)
	{
		new_array[i] = ft_strdup(array[i]);
		if (new_array == NULL)
		{
			while (i > 0)
			{
				i--;
				ft_free(&new_array[i]);
			}
			ft_free(&new_array);
			return (NULL);
		}
		i++;
	}
	return (new_array);
}
