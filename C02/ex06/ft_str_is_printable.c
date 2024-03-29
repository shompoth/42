/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 07:52:47 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/12 16:33:03 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int cmp;

	i = 0;
	cmp = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
			cmp++;
		i++;
	}
	if (cmp > 0)
		return (0);
	else
		return (1);
}
