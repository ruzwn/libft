/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:24:23 by ogranger          #+#    #+#             */
/*   Updated: 2021/10/26 15:17:34 by ogranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*temps1;
	unsigned char	*temps2;

	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*temps1 == '\0' || *temps2 == '\0')
			return (*temps1 - *temps2);
		if (*temps1 != *temps2)
			return (*temps1 - *temps2);
		temps1++;
		temps2++;
	}
	return (0);
}
