/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodelgrange <theodelgrange@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:13:39 by theodelgran       #+#    #+#             */
/*   Updated: 2022/11/15 13:18:28 by theodelgran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;

	i = 0;
	while (i < (int)n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void*)s++);
		i++;
	}
	return (0);
}