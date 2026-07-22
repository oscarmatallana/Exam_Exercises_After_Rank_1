/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 18:15:55 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/22 19:13:39 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	word_l(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	char	*s;
	int		s_length;

	if (argc == 2)
	{
		s = argv[1];
		s_length = word_l(s);
		if (s_length > 0)
		{
			s = s + s_length - 1;
			while (s_length > 0)
			{
				write(1, s, 1);
				s--;
				s_length--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}