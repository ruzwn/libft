/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:36:19 by ogranger          #+#    #+#             */
/*   Updated: 2021/10/26 15:03:52 by ogranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	sym;

	temp = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n-- > 0)
	{
		if (*temp == sym)
			return (temp);
		temp++;
	}
	return (NULL);
}
