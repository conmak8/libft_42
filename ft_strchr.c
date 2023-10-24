/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:43:03 by cmakario          #+#    #+#             */
/*   Updated: 2023/10/19 05:59:04 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i ;

	i = 0 ;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++ ;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
// #include <string.h>
// #include <stdio.h>

// int main (void)
// {
// 	printf ("%s\n", ft_strchr("teste", 1024));
// 	printf ("%s\n", strchr("teste", 1024));
// }
// fed
