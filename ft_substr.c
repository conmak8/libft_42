/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:06:43 by cmakario          #+#    #+#             */
/*   Updated: 2023/10/30 13:47:47 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
// s: The string from which to create the substring. start: The start index of
// the substring in the string ’s’.
// len: The maximum length of the substring.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*p;
	unsigned int	lenth;

	i = 0;
	lenth = ft_strlen(s);
	if (start > lenth)
		return (ft_strdup(""));
	if ((start <= lenth) && (len <= (lenth - start)))
		p = (char *)malloc(len * sizeof(char) + 1);
	else
	{
		p = (char *)malloc((lenth - start) * sizeof(char) + 1);
		len = (lenth - start);
	}
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
