/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:12:08 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/12 16:31:18 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int cmp;

	i = 0;
	cmp = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || 'z' < str[i])
			cmp++;
		i++;
	}
	if (cmp > 0)
		return (0);
	else
		return (1);
}
