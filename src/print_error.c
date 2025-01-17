/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:12:38 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 13:14:59 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testlib.h"
#include <stdio.h>
#define STR_ERROR "\033[0;31m\u274C\033[0m"

void	print_error(void)
{
	printf("%s", STR_ERROR);
}