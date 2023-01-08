/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:34:35 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:32:13 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char *ft_strjoin(char const *s1, char const *s2)
//     -> allocates (with malloc(3)) and returns a “fresh” string ending with
//        ’\0’, output of the concatenation of s1 and s2
//     -> return: “fresh” string output of the concatenation of the 2 strings
//                NULL if allocation fails
//     -> external functions: malloc(3)

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*output;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	output = (char *) malloc ((ft_strlen(s1)+ft_strlen(s2)+1) * sizeof(char));
	if (!output)
		return (0);
	i = -1;
	while (s1 != NULL && s1[++i])
		output[i] = s1[i];
	j = -1;
	while (s2 != NULL && s2[++j])
		output[i++] = s2[j];
	output[i] = '\0';
	return (output);
}
