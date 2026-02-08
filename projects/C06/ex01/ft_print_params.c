/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:57:32 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/08 23:13:06 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char* argv[])
{
	char* p;
	int i;

	(void)argc;
	i = 1;
	while (argv[i])
	{
		p = argv[i];
		while(*p)
		{
			write(1, p, 1);
			p++;
		}
		write(1, "\n", 1);
		i++;
	}
	return 0;
}