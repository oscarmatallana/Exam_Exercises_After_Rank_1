/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 17:37:16 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/22 17:42:13 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	i;
	int	ones;
	int	tens;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i < 10)
		{
			ones = i + '0';
			write(1, &ones, 1);
		}
		else
		{
			ones = i % 10 + '0';
			tens = i / 10 + '0';
			write(1, &tens, 1);
			write(1, &ones, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}