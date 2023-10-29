/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:04:24 by cmakario          #+#    #+#             */
/*   Updated: 2023/10/29 21:45:15 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /**
//  * @brief Allocates with malloc and returns a copy of ’s1’ with the characters 
//  * specified in ’set’ removed from the beginning and the end of the string
//  * 
//  * @param s1 The string to be trimmed.
//  * @param set The reference set of characters to trim.
//  * @return 	The trimmed string.
// 			NULL if the allocation fails.
//  */
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		lens1;
// 	int		lenset;
// 	int		counter;
// 	int		i;
// 	char	*cp;

// 	i = 0;
// 	counter = 0;
// 	lens1 = ft_strlen(s1);
// 	lenset = ft_strlen(set);
// 	while (i < lens1)
// 	{
// 		if (set[i] == s1[i])
// 			counter += 1;

// }

// Ti ehei grapsei i tipissa!!!!

/**
 * @brief Allocates with malloc and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string
 * 
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return 	The trimmed string.
			NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
