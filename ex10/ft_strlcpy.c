/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:26:11 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 20:13:31 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	x;

	x = 0;
	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	size_src++;
	if (src[x] != '\0')
	{
		while (x < size -1 && src[x] != '\0')
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (size_src);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int	x;
// 	int	x2;
// 	unsigned int	size_src;
// 	char	src[] = "In the end of the Day";
// 	char	dest[90];

// 	size_src = ft_strlcpy(dest, src, 90);
// 	x = 0;
// 	x2 = 0;
// 	while (src[x] != '\0')
// 	{
// 		write(1, &src[x], 1);
// 		x++;
// 	}
// 	ft_putchar('\n');
// 	while (dest[x2] != '\0')
// 	{
// 		write(1, &dest[x2], 1);
// 		x2++;
// 	}
// 	ft_putchar('\n');
// 	ft_putchar('0' + (size_src / 100));
// 	ft_putchar('0' + (size_src / 10));
// 	ft_putchar('0' + (size_src % 10));
// 	return (0);
// }
