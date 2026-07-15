/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_version2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:45:36 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/15 17:09:14 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    rot_13(char c)
{
    if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
    {
        return (c + 13);
    }
    else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
    {
        return (c - 13);
    }
    else
    return (c);
}

int     main(int argc, char **argv)
{
    char    *s;
    char    c;
    
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    s = argv[1];
    while (*s)
    {
        c = rot_13(*s);
        write(1, &c, 1);    
        s++;
    }
    write(1, "\n", 1);
    return (0);
}