#include "libft.h"
#include <stdio.h>

typedef struct point {
	int x;
	int y;
} point;

// create a function that display a point and use it in ft_lstiter
void ft_print_point(void *content)
{
	point *p;

	p = (point*)content;
	printf("{%d,%d}\n", p->x, p->y);
}

int	main(int argc, char *argv[])
{
	point *p;
	int	i;
	t_list *node;
	t_list *points;
	char **arr;
0
	points = NULL;
	i = 1;

	// loop over argv
	while (i  < argc)
	{
		// create new point
		p = (point *)malloc(sizeof(point));
		// set p and y to zero ==> to them values
		arr = ft_split(argv[i], ',');
		p->x = ft_atoi(arr[0]);
		p->y = ft_atoi(arr[1]);
		// create new list node and store p in it
		node = ft_lstnew(p);
		// add node to list
		ft_lstadd_back(&points, node);
		// free arr
		free(arr[0]);
		free(arr[1]);
		free(arr);
		i++;
	}
	ft_lstiter(points, ft_print_point);
	return (0);
}
