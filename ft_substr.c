/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:16:18 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/03 18:29:59 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (s[start + i] && i < len)
	{
		dest[i] = *(s + start + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
