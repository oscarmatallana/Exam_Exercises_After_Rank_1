/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_Version_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:10:33 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/21 18:43:38 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	word_l(char *s)
{
	int	i;

	i = 0;
	while (*s && *s != ' ' && *s != '\t' && *s != '\n')
	{
		i++;
		s++;
	}
	return (i);
}

char	*duplicate(char *s)
{
	char	*word;
	int	length;
	int	i;

	length = word_l(s);
	word = malloc((sizeof(char)) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}


