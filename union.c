/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:17:07 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/16 17:56:45 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_exists(char *argv_begin, char *current_position, char c)
{
	while (argv_begin < current_position)
	{
		if (*argv_begin == c)
			return (1);
		argv_begin++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	s1 = argv[1];
	while (*s1)
	{
		if (!char_exists(argv[1], s1, *s1))
			write(1, s1, 1);
		s1++;
	}
	s2 = argv[2];
	while (*s2)
	{
		if (!char_exists(argv[2], s2, *s2)
			&& !char_exists(argv[1], s1, *s2))
			write(1, s2, 1);
		s2++;
	}
	write(1, "\n", 1);
	return (0);
}

/* When the first loop finishes,
s1 now points to the end of the first string.
That means:
char_exists(argv[1], s1, *s2)
searches the entire first string. */