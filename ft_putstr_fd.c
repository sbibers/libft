/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbibers <sbibers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:48:24 by sbibers           #+#    #+#             */
/*   Updated: 2024/08/29 17:19:10 by sbibers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	int	fd;

    fd = open("ron.txt", O_CREAT | O_WRONLY);
    if (fd == -1)
    {
        printf("%s", "error");
        return (0);
    }
    ft_putstr_fd("salam thaer baybars", fd);
    close(fd);
}
*/