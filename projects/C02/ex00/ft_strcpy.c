/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:43:24 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/03 13:27:41 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	k;

	k = 0;
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		// printf("%c\n", dest[k]);
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

/*int main(void)
{
	char* dest;
	char* src;
	char t1[4] = "test";
	char t2[4] = "abcd";

	dest = t1;
	src = t2;
	ft_strcpy(t1, t2);
}*/