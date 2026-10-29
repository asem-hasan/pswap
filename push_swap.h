/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:14:16 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/28 15:22:36 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_swap
{
	int				value;
	int				index;
	struct s_swap	*next;
}	t_swap;

typedef struct s_config
{
	int		strategy;
	int		bench;
}	t_config;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

int		check_duplicates(t_swap *stack_a, int value);
int		parse_number(const char *s, int *final);
int		parse_flag(const char *arg, t_config *cfg);
int		parse_args(int argc, char **argv, t_swap **a, t_config *cfg);
int		add_number(t_swap **a, int value);

#endif
