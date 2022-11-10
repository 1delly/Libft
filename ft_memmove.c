/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:24:22 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/10 18:17:25 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    char *s;
    size_t i;
    
    d = (char *)dest;
    s = (char *)src;
    i = 0;
    if (!dest && !src)
        return (0);
    if (d > s)
    {
        while (n-- > 0)
            d[n] = s[n];
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}