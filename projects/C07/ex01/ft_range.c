/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:42:17 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/09 00:29:49 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if(min >= max)
		return NULL;
	arr = malloc((max - min) * 4);
	while(max - min > 0)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return arr;
}

int main()
{
	int *arr = ft_range(3, 6);
	//int i = 0;

	while(*arr)
	{
		printf("%d", *arr);
		arr++;
	}
	return 0;
}