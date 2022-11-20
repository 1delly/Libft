/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:19:49 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/21 00:35:55 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  n;
    char    *a;
    
    if (!s || !f)
        return (0);
    i = -1;
    n = ft_strlen(s);
    if (!(a = (char *)malloc(n + 1)))
        return (0);
    while (++i < n)
        a[i] = f(i, s[i]);
    a[i] = '\0';
    return (a);
}
