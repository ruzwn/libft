/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:25:58 by ogranger          #+#    #+#             */
/*   Updated: 2021/10/28 15:35:17 by ogranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*h;

	h = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (h);
	if (ft_strlen(h) < needle_len || len < needle_len)
		return (NULL);
	i = 0;
	while (i <= len - needle_len)
	{
		j = 0;
		while (needle[j] != '\0' && h[i + j] != '\0' && needle[j] == h[i + j])
			j++;
		if (j == needle_len)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
