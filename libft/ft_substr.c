/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:30:29 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 17:06:31 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as
//     char *ft_substr(char const *s, unsigned int start, size_t len)
//     -> allocates (with malloc(3)) and returns a substring from the string
//        given as argument
//     -> the substring begins at index start and is of size len
//     -> return value: the substring
//                      NULL if allocation fails
//     -> external functions: malloc(3)

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	sub = (char *) malloc ((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (len-- != 0 && start < (unsigned int) ft_strlen(s))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
