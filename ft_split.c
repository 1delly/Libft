/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:58:59 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/05 11:57:51 by tdelgran         ###   ########.fr       */
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

/*s = "       3ello world    ! " c = ' '
"3ello" str[index] -> 5 caracteres i = 5 str[0] = malloc(i * sizeof(char));
"world"
"!"*/

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		count;
	int		len;
	int		ichar;
	int		itab;
	
	strings = 0;
	count = ft_count(s, c);
	*strings = malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (0);
	ichar = 0;
	itab = 0;
	while (s[ichar] && s[ichar] == c)
		ichar++;
	while (s[ichar])
	{
		len = 0;
		while (s[ichar] != c)
		{
			len++;
			ichar++;
		}
		strings[itab] = malloc((len + 1) * sizeof(char));
		if (!*strings)
			return (0);
		while (s[ichar] == c)
			ichar++;
	}
	return (strings);
}