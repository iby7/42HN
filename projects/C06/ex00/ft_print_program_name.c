/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:34:41 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/06 10:45:19 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    char *p;

    (void)argc;
    p = argv[0];
    while (*p)
    {
        write(1, p, 1);
        p++;
    }
    write(1, "\n", 1);
    return 0;
}