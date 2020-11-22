/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 19:39:55 by rvan-duy      #+#    #+#                 */
/*   Updated: 2020/11/22 19:50:24 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlist;

    if (!lst)
        return ;
    newlist = ft_lstnew(lst->content);
    if (!newlist)
        return (NULL);
    while (newlist)
    {
        
    }
}
