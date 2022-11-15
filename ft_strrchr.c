/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:02:51 by theodelgran       #+#    #+#             */
/*   Updated: 2022/11/15 17:36:13 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	i;

	i = c;
	if (*s == i)
	{
		while (*s)
			return ((char *)s);
		s++;
	}
	while (*s)
	{
		if (*s == '\0')
			return ((char *)s);
		s++;
	}
	return (0);
}