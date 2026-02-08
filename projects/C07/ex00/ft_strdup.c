/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:27:33 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/08 23:41:27 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *ft_strdup(char *src)
{
	char* str;
	int i;

	i = 0;
	while(src[i])
		i++;
	str = (char*)malloc(i);
	i = 0;
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	return  str;
}

int main()
{	
	char *str = ft_strdup("test");
	
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
	return 0;
}