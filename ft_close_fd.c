/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_close_fd.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/18 13:01:33 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/06/21 23:34:42 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <string.h>

void ft_close_fd(int fd)
{
	if (close(fd) < 0)
	{
		ft_putstr_fd(strerror(errno), 2);
		ft_putstr_fd(": Close (fd: ", 2);
		ft_putnbr_fd(fd, 2);
		ft_putendl_fd(")", 2);
		exit(1);
	}
}
