/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:36:09 by salaverd          #+#    #+#             */
/*   Updated: 2021/04/25 17:36:10 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int ch)
{
	return (ch >= 0 && ch <= 127);
}