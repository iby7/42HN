/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:31:23 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/10 16:45:28 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		len;
	int		j;
	char	*temp;

	(void)argc;
	len = 1;
	j = 0;
	while (argv[len])
		len++;
	while (j < len)
	{
		i = 1;
		while (i < len - 1 - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
				i++;
			}
		}
		j++;
	}
	i = 1;
	while (argv[i])
	{
		temp = argv[i];
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
