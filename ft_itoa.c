/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:23:49 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/02 14:46:28 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	thelen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		titi;
	long	a;

	titi = thelen(n);
	str = malloc(sizeof(char) * (titi + 1));
	a = n;
	if (!str)
		return (0);
	if (a < 0)
	{
		str[0] = 45;
		a = -a;
	}
	if (a == 0)
		str[0] = 48;
	str[titi--] = '\0';
	while (a)
	{
		str[titi] = a % 10 + 48;
		titi--;
		a = a / 10;
	}
	return (str);
}
