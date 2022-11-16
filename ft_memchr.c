/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:13:39 by theodelgran       #+#    #+#             */
/*   Updated: 2022/11/16 17:33:04 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;

	str = ((unsigned const char *)s);
	while (n)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
		n--;
	}
	return (0);
}
