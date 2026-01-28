/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:43:24 by ibtunc            #+#    #+#             */
/*   Updated: 2026/01/28 15:19:42 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (*src++)
	{
		i++;
	}
	src = src - i;
	while (k < i)
	{
		dest[k] = src[k];
		write(1, &src[k], 1);
		k++;
	}
	return (dest);
}
int main(void)
{	
	// char* dest;
	// char* src;
	// char t1[4] = "test";
	// char t2[4] = "abcd";
	
	// dest = &t1;
	// src = &t2;
	ft_strcpy("test", "abcd");
}