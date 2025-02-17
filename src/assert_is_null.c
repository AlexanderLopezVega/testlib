/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_is_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:10:45 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:52:00 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testlib.h"

void	assert_is_null(const void *ptr)
{
	assert_is_true(ptr == 0);
}