/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danil <danil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 10:51:23 by ogranger          #+#    #+#             */
/*   Updated: 2021/10/30 14:30:53 by danil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ret;
	char	sym;

	ret = (char *)s;
	sym = (char)c;
	while (*ret != '\0' && *ret != sym)
		ret++;
	if (*ret == sym)
		return (ret);
	return (NULL);
}
