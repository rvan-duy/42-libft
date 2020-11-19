/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ruben <rvan-duy@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 12:04:12 by ruben         #+#    #+#                 */
/*   Updated: 2020/11/19 21:53:26 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (((unsigned char *)s)[i] != c)
	{
		if (((unsigned char *)s)[i] == '\0')
			return (0);
		i++;
	}
	return (&((unsigned char *)s)[i]);
}
