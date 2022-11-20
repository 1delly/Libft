/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:50:21 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/18 16:03:13 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a, size_t b)
{
	size_t	*titi;

	if (a == SIZE_MAX || b == SIZE_MAX)
		return (0);
	titi = malloc(a * b);
	if (!titi)
		return (0);
	ft_bzero(titi, (a * b));
	return (titi);
}
