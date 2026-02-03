/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:47:59 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/03 13:27:50 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] <= tab[i + 1])
		{
			i++;
		}
		else
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			ft_sort_int_tab(tab, size);
		}
	}
}
