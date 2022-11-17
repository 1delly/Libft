/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:29:47 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/17 16:44:13 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  len;
    
    if (!*needle && !n)
        return ((char *)haystack);
    len = ft_strlen(needle);
    while (*haystack++ != '\0' && n-- >= len)
    {
        while (*needle == '\0')
            if (haystack == needle)
                return ((char *)haystack);
    }
    return (0);
}