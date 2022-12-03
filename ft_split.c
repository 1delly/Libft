/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:58:59 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/03 19:25:33 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char *s)
{
	int	i;
	
	if (!s)
		return (0);
		i = 0;
	if (ft_isalpha(*s))
		i++;
	while (*s)
		s++;
	return (i);
}

char	**ft_split(char const *s, char c)