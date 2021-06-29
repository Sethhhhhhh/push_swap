#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_chunk
{
	size_t			size;
	int				value;
	struct s_chunk	*prev;
	struct s_chunk	*next;
}				t_chunk;

typedef struct s_stack
{
	int				data;
	struct s_stack	*prev;
	struct s_stack	*next;
}				t_stack;

/*
** Parsing
*/

int		parse(t_stack **a, char **av, int ac);

/*
** Stack
*/

void	stk_clear(t_stack **stack);
void	stk_push_back(t_stack **stack, int data);
void	stk_push_front(t_stack **stack, int data);
void	stk_remove_back(t_stack **stack);
void	stk_remove_front(t_stack **stack);
int		stk_get_index_by_data(t_stack *stack, int data);
int		stk_get_data_by_index(t_stack *stack, size_t index);
int		stk_get_min(t_stack *st);
int		stk_get_max(t_stack *st);
t_stack	*stk_new(int data);
void	free_stack_chunk(t_stack **a, t_stack **b);

/*
** Sorting
*/

void	sorting_three(t_stack **a, size_t count);
void	sorting_five(t_stack **a, t_stack **b, size_t count);
void	sorting(t_stack **a, t_stack **b, size_t count);
t_chunk	*create_chunk(t_stack *a, t_chunk *chunk, size_t count);
size_t	check_stack(t_stack **a, t_stack **b, t_chunk *chunk);
int		get_midpoint(t_stack *a, size_t count);
int		is_sorted(t_stack *stack, size_t count);
int		is_reverse_sorted(t_stack *stack, size_t count);
void	push_chunk_to_a(t_stack **a, t_stack **b, t_chunk *chunk);

/*
** Operation
*/

void	opr_sa(t_stack *a);
void	opr_sb(t_stack *b);
void	opr_ss(t_stack *a, t_stack *b);
void	opr_pa(t_stack **a, t_stack **b);
void	opr_pb(t_stack **a, t_stack **b);
void	opr_ra(t_stack **a);
void	opr_rb(t_stack **b);
void	opr_rr(t_stack **a, t_stack **b);
void	opr_rra(t_stack **a);
void	opr_rrb(t_stack **b);
void	opr_rrr(t_stack **a, t_stack **b);

#endif
