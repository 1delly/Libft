/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:38 by tdelgran          #+#    #+#             */
/*   Updated: 2022/11/29 12:28:17 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    unsigned int    start;
    unsigned int    end;
    int i;
    int a;
    
    if (!s1 || !set)
        return (0);
    i = 0;
    a = ft_strlen(s1);
    while (s1)
    {
        while (s1[i] == set[i])
            i++;
        start = i;
    }
    while (s1[a] != s1[0])
    {
        while (s1[a] == set[ft_strlen(set)])
            a--;
        end = a;
    }
    str = malloc(sizeof(char *) * (end - start + 1));
    return (str);           
}