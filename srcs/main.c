#include "../includes/push_swap.h"

static int	error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	size_t	count;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	count = parse(&a, av, ac);
	if (!count)
	{
		free_stack_chunk(&a, &b);
		return (error());
	}
	else if (is_sorted(a, count))
		return (0);
	else if (count > 1 && count <= 3)
		sorting_three(&a, count);
	else if (count > 3 && count <= 5)
		sorting_five(&a, &b, count);
	else if (count > 5 && count != 1)
		sorting(&a, &b, count);
	free_stack_chunk(&a, &b);
	return (0);
}
