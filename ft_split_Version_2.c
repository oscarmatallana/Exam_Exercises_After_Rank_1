/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_Version_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:10:33 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/22 15:56:44 by omatalla         ###   ########.fr       */
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
	int		length;
	int		i;

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

void	fill(char **array, char *s)
{
	int	i;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	i = 0;
	while (*s)
	{
		array[i] = duplicate(s);
		if (!array[i])
			return ;
		i++;
		while (*s && *s != ' ' && *s != '\t' && *s != '\n')
			s++;
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
	}
}

int	count_w(char *s)
{
	int	i;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	i = 0;
	while (*s)
	{
		i++;
		while (*s && *s != ' ' && *s != '\t' && *s != '\n')
			s++;
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
	}
	return (i);
}

char	**ft_split(char *s)
{
	int		word_n;
	char	**array;

	word_n = count_w(s);
	array = malloc(sizeof(char *) * (word_n + 1));
	if (!array)
		return (NULL);
	array[word_n] = NULL;
	fill(array, s);
	return (array);
}
