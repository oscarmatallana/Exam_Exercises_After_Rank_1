/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:55:46 by omatalla          #+#    #+#             */
/*   Updated: 2026/07/15 13:30:51 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    char    *s;
    char    rot_13;
    
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    s = argv[1];
    while (*s)
    {
        if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
        {
            rot_13 = *s + 13;
            write(1, &rot_13, 1);
        }
        else if ((*s >= 'N' && *s <= 'Z') || (*s >= 'n' && *s <= 'z'))
        {
            rot_13 = *s - 13;
            write(1, &rot_13, 1);
        }
        else
        {
            write(1, s, 1);
        }
        s++;
    }
    write(1, "\n", 1);
    return (0);
}
