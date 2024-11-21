/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:23:25 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 13:28:55 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

// void	ft_putstr(char *str)
// {
// 	int	x;

// 	x = 0;
// 	while (str[x] != '\0')
// 	{
// 		write(1, &str[x], 1);
// 		x++;
// 	}
// }

// int	main(void)
// {
// 	char	src[] = "Hello I want to be copied to!";
// 	char	dest[100];

// 	ft_strncpy(dest, src, 12);
// 	ft_putstr(dest);
// 	return (0);
// }
