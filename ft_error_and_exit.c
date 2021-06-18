/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error_and_exit.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 16:29:55 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/06/15 15:01:52 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error_and_exit(int ret, char *msg)
{
	if (msg)
	{
		ft_putstr_fd("Error\n", 2);
		ft_putendl_fd(msg, 2);
	}
	exit(ret);
}
