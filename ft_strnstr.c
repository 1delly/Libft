/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:29:47 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/20 21:46:20 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (haystack == 0 && n == 0)
		return ((char *)haystack);
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[a] && a < n)
	{
		b = 0;
		while (needle[b] == haystack[a + b] && (a + b) < n)
		{
			b++;
			if (b == ft_strlen(needle))
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (0);
}
