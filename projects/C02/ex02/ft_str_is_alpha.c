/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:34:05 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/03 13:27:30 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(void)
{
	char* test0 = "084ab02";
	char* test1 = "ab";
	char* test2 = "012354984430352620";
	char* test3 = "";

	printf("%d\n", ft_str_is_alpha(test2));
}*/