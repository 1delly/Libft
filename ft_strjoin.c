/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:19:46 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/20 22:39:49 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*titi;
	int		i;
    
	if (!(titi = (char *)malloc(sizeof(*titi) * (ft_strlen(s1) + ft_strlen(s2)))))
		return (0);
	i = 0;
	while (*s1 != '\0')
	{
		titi[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		titi[i] = *s2;
		s2++;
		i++;
	}
	return (titi);
}