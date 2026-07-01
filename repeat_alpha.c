/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:21:11 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/01 17:26:12 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	repetitions;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
		repetitions = argv[1][i] - 'a' + 1;
		j = 0;
		while (j < repetitions)
		{
			write (1, &argv[1][i], 1);
			j++;
		}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
		repetitions = argv[1][i] - 'A' + 1;
		j = 0;
		while (j < repetitions)
		{
			write (1, &argv[1][i], 1);
			j++;
		}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
