/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha_version3.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:21:11 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/03 18:56:37 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_repetitions(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	s = argv[1];
	while (*s)
	{
		i = get_repetitions(*s);
		while (i--)
		{
			write(1, s, 1);
		}
		s++;
	}
	write(1, "\n", 1);
	return (0);
}
