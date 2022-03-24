/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:38:31 by ogranger          #+#    #+#             */
/*   Updated: 2021/11/02 14:22:54 by ogranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* doesn't care about overlap */
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (temp1 == temp2)
		return (temp1);
	while (n-- > 0)
	{
		*temp1 = *temp2;
		temp1++;
		temp2++;
	}
	return (dst);
}
