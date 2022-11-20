/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:47:07 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/20 22:16:11 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	if ((!dest || !src) && (!n))
		return (0);
	while (dest[a] && a < n)
		a++;
	while (src[i] && n && a + i < n - 1)
	{
		dest[a + i] = (char)src[i];
		i++;
	}
	if (a < n)
		dest[a + i] = 0;
	while (src[i])
		i++;
	return (a + i);
}
