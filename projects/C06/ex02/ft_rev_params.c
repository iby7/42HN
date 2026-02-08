/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:54:15 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/08 23:16:15 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	char* p;
	int i;

	(void)argc;
	i = 1;
	while(argv[i])
		i++;
	while (i > 1)
	{
		p = argv[i - 1];
		while(*p)
		{
			write(1, p, 1);
			p++;
		}
		write(1, "\n", 1);
		i--;
	}
	return 0;
}