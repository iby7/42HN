/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:26:54 by ibtunc            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/02/05 13:58:20 by ibtunc           ###   ########.fr       */
=======
/*   Updated: 2026/02/08 15:41:20 by ibtunc           ###   ########.fr       */
>>>>>>> ecff557 (add new projects and ex)
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
<<<<<<< HEAD
	char	w[12];
	int		k;

	k = 0;
	if (nb == 0)
=======
	char r[12];
	int i;

	i = 0;
	if(nb == 0)
		write(1, "0", 1);
	if(nb < 0)
>>>>>>> ecff557 (add new projects and ex)
	{
		write(1, "-", 1);
		nb *= -1;
	}	
	while(nb != 0)
	{
		r[i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
	while(i >= 0)
	{
<<<<<<< HEAD
		while (nb > 0)
		{
			w[k] = '0' + (nb % 10);
			nb /= 10;
			k++;
		}
		while (k >= 0)
		{
			write(1, &w[k], 1);
			k--;
		}
	}
}

/*int	main(void)
{
	ft_putnbr(23);
	return (0);
}*/
=======
		write(1, &r[i], 1);
		i--;
	}
}

int main()
{
	ft_putnbr(0);
	return 0;
}
>>>>>>> ecff557 (add new projects and ex)
