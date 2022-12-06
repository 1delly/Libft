/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:58:59 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/06 18:37:17 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char sep)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[index] && str[index] == sep)
		index++;
	while (str[index])
	{
		count++;
		while (str[index] && str[index] != sep)
			index++;
		while (str[index] && str[index] == sep)
			index++;
	}
	return (count);
}

static void	ft_tab(char const *s, char c, char **string)
{
	size_t	index;
	size_t	a;
	size_t	b;

	index = 0;
	b = 0;
	while (s[index])
	{
		a = 0;
		while (s[index] && s[index] == c)
			index++;
		while (s[index + a] && s[index + a] != c)
			a++;
		if (a)
		{
			string[b] = ft_substr(s, index, a);
			b++;
		}
		index = index + a;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	size_t	count;

	if (!s)
		return (0);
	count = ft_count(s, c);
	string = malloc(sizeof(char *) * (count + 1));
	if (!string)
		return (0);
	ft_tab(s, c, string);
	string[count] = 0;
	return (string);
}
