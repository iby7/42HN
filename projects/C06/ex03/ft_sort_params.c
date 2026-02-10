/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:31:23 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/10 21:44:56 by ibtunc           ###   ########.fr       */
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

void	bubble_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		j++;
	}
}

void	print_params(char **argv)
{
	int i;
	char* temp;
	
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
}

int	main(int argc, char *argv[])
{
	
	bubble_sort(argc, argv);
	print_params(argv);
	return (0);
}
