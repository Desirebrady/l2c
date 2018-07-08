
#include <stdio.h>
#include <unistd.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};


int ascending(int a, int b)
{
	return (a <= b);
}


t_list		*sortlist(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

int main()
{
	t_list *list;
	int data;

	data = 9;
	list->data = data; 
	while (list->next != NULL){
	//sortlist(list, (int *ascending(1, 9));
	printf("%d\n",list->data);
	}
	return (0);
}
