/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodelgrange <theodelgrange@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:58:59 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/06 16:44:11 by theodelgran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *str, char sep)
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

/*char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		count;
	int		len;
	int		ichar;
	int		itab;
	
	strings = 0;
	count = ft_count(s, c);
	strings = malloc(sizeof(char *) * (count + 1));
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
}*/

void	ft_tab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
		{
			tab[k] = ft_substr(s, i, j);
			k++;
		}
		i = i + j;
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