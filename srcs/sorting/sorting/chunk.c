#include "../../../includes/push_swap.h"

static void	sorting_table(int *t, size_t count)
{
	int		swap;
	size_t	j;

	while (count)
	{
		j = 0;
		while (j < (count - 1))
		{
			if (t[j + 1] < t[j])
			{
				swap = t[j + 1];
				t[j + 1] = t[j];
				t[j] = swap;
			}
			j++;
		}
		count--;
	}
}

int	get_midpoint(t_stack *a, size_t count)
{
	int		*t;
	size_t	i;
	int		value;

	value = 0;
	t = (int *)malloc(sizeof(int) * count);
	if (!t)
		return (0);
	i = 0;
	while (a && i < count)
	{
		t[i] = a->data;
		a = a->next;
		i++;
	}
	sorting_table(t, i);
	value = t[count / 2];
	free(t);
	return (value);
}

t_chunk	*create_chunk(t_stack *a, t_chunk *chunk, size_t count)
{
	t_chunk	*new;

	new = malloc(sizeof(t_chunk));
	ft_bzero(new, sizeof(t_chunk));
	if (!new)
		return (NULL);
	if (chunk)
	{
		chunk->next = new;
		new->prev = chunk;
	}
	new->size = count / 2;
	new->value = get_midpoint(a, count);
	return (new);
}
