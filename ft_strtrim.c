/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:30:10 by ogranger          #+#    #+#             */
/*   Updated: 2021/10/28 17:29:56 by ogranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_str;
	char	*new_str;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_str = ft_strlen(s1);
	while (size_str && ft_strchr(set, s1[size_str]))
		size_str--;
	new_str = ft_substr((char *)s1, 0, size_str + 1);
	return (new_str);
}
