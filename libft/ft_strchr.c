/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:23:50 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:21:40 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char *strchr(const char *s, int c)
//     -> #include <string.h>
//     -> locates the first occurrence of c (converted to a char) in the string
//        pointed to by s
//     -> the terminating null character is considered to be part of the string;
//        therefore if c is ‘\0’, the functions locate the terminating ‘\0’
//     -> returns a pointer to the located character
//     -> returns NULL if the character does not appear in the string

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			char_c;
	char			*char_s;
	size_t			i;

	char_c = (char) c;
	char_s = (char *) s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (char_s[i] == char_c)
			return (&char_s[i]);
		i++;
	}
	return (NULL);
}
