/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 10:49:46 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/16 11:54:02 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	s = argv[1];

	while (*s == ' ' || *s == '\t')
		s++;
	while (*s && *s != ' ' && *s != '\t')
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
	return (0);
}
