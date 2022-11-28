/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodelgrange <theodelgrange@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:16:18 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/28 19:39:00 by theodelgran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t    sizemec(char const *s, unsigned int start, size_t len)
{
    size_t  titi;

    titi = ft_strlen(s) - start;
    while (titi > len)
        titi--;
    return (titi);
}*/

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dest;
    size_t i;
    
    if (!s)
        return (0);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    i = 0;
    //i = ft_strlen(s + start) + 1;
    dest = malloc(sizeof(char) * (len + 1));       //(sizemec(s, start, len) + 1));
    if (!dest)
        return (0);
    while (i < len)
    {
        dest[i] = *(s + start + i);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}