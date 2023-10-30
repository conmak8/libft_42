/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:30:16 by cmakario          #+#    #+#             */
/*   Updated: 2023/10/30 16:17:20 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array of strings obtained by spli-
// tting ’s’ using the character ’c’ as a delimiter. The array must end with a 
// NULL pointer.      	s: The string to be split.
//						c: The delimiter character.
// R: The array of new strings resulting from the split. 
// NULL if the allocation fails.
char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	numberofwords;
	char 			**fsplit;
	
	i = 0;
	numberofwords = 0;
	len = ft_strlen(s);
	while (i < len && len != 0)
	{
		if (s[i] != c)
			numberofwords += 1;
		i++;
	}
	if (numberofwords != 0)
		**fsplit = (char**)malloc(numberofwords * sizeof(char*));
		*fsplit = (char*)malloc(ft_strlen(oneword))
	
}