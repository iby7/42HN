/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:03:34 by ibtunc            #+#    #+#             */
/*   Updated: 2026/01/28 21:47:01 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int k;

	k = 0;
	while(src[k] != '\0')
	{
		dest[k] = src[k];
		printf("%c\n", 'A');
		k++;
	}
	while(dest[k + 1] != '\0')
	{
		dest[k] = '\0';
		printf("%c\n", 'B');
		k++;
	}
	return (dest);
}

int main(void)
{	
	char* dest;
	char* src;
	char t1[8] = "test1236";
	char t2[4] = "abcd";
	
	dest = t1;
	src = t2;
	ft_strncpy(t1, t2, 1);
}