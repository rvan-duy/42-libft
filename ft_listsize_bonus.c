/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_listsize_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/18 13:49:26 by rvan-duy      #+#    #+#                 */
/*   Updated: 2020/11/18 13:57:36 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_listsize(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
