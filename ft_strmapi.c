/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:19:49 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/21 00:43:34 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  n;
    char    *str;
    
    if (!s || !f)
        return (0);
    i = 0;
    n = ft_strlen(s);
    if (!(str = (char *)malloc(sizeof(char) * (n + 1))))
        return (0);
    while (i < n)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
