/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:29:02 by ogranger          #+#    #+#             */
/*   Updated: 2021/10/24 11:29:20 by ogranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*copy;
	char	*temp;

	len = ft_strlen(s1) + ft_strlen(s2);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	temp = copy;
	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	return (copy);
}
