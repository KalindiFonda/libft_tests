#include "libft.h"
#include <stdio.h>



char	*ft_str_toupper(char *c)
{
	int i;
	char *d;

	d = c;
	i = 0;
	while (c[i] != '\0')
		{
			if (c[i] >= 97 && c[i] <= 122)
				d[i] = c[i] - 32;
			else
				d[i] = c[i];
			i++;
		}
	return (d);
}

t_list *		lstmap_f(t_list *m) {
	t_list *	r = ft_lstnew("OK !", 5);
	(void)m;
	return (r);
}


t_list *		lstmap_f1(t_list *m) {
	//t_list *	r = ft_lstnew("OK !", 5);
	//(void)m;
	m->content = ft_str_toupper(m->content);
	return (m);
}


void		lstiter_f(t_list *m) {
	//t_list *	r = ft_lstnew("OK !", 5);
	(void)m;
	//return (r);
}


void			lstdel_f(void *lst, size_t s) {
	(void)lst;
	(void)s;
//	__delNum++;
}


void	lstiter_test(t_list *ppp)
{
	ppp->content_size = 42;
}


void	*ft_strcat_fold(void *dest, void *src)
{
	char	*pdest;
	char	*psrc;
	int		i;
	int		j;

	i = 0;
	j = 0;
	pdest = dest;
	psrc = src;
	printf("%s %s\n", pdest, psrc );
	while (pdest[i] != '\0')
		i++;
	while (psrc[j] != '\0')
	{
		pdest[i] = psrc[j];
		i++;
		j++;
	}
	pdest[i] = '\0';
	printf("here: %s\n",pdest );
	return (pdest);
}


int main()
{

	//////////////////////////////////////////////////////// ft_atoi
	printf("\n\n ft_atoi\n");



	//////////////////////////////////////////////////////// ft_lstnew
	printf("\n\n ft_lstnew\n");
	printf("%lu\n", sizeof("hello"));
	t_list* list = 0;
	list = ft_lstnew("asdef", 6);
	list->next = ft_lstnew("qwer", 5);
	list->next->next = ft_lstnew("zxcv", 5);
	list->next->next->next = ft_lstnew("asdf", 5);
	list->next->next->next->next = ft_lstnew("last", 5);
	//ft_print_list(list);


	t_list	*begin;
	size_t	v;

	v = 1;
	begin = ft_lstnew(NULL, 36);
	printf("true %d\n", begin != 0);
	printf("and\n" );
	printf("%d\n", begin->content_size != 0);
	printf("or\n" );
	printf("%d\n", begin->content != NULL);
	free(begin->content);
	free(begin);
	begin = ft_lstnew(&v, sizeof(size_t));
	printf("0 %d\n", begin == NULL);
	printf("0 %d\n", &v == begin->content);
	printf("x%zu %zu\n", v, *(size_t*)begin->content);
	printf("x0 %d\n", *(size_t*)begin->content != 1);
	printf("%zu, %lu should  be same\n", begin->content_size, sizeof(size_t));
	printf("%d, 1\n", begin->next == 0);
	free(begin->content);
	free(begin);

	//////////////////////////////////////////////////////// ft_lstmap
	printf("\n\n ft_lstmap\n");

	ft_print_list(list);

	list = ft_lstmap(list, lstmap_f);

	ft_print_list(list);


	t_list	*l = ft_lstnew(strdup(" 1 2 3 "), 8);
	t_list	*ret;

	l->next = ft_lstnew(strdup("ss"), 3);
	l->next->next = ft_lstnew(strdup("-_-"), 4);
	ft_print_list(l);
	ret = ft_lstmap(l, lstmap_f);
	ft_print_list(ret);

	printf("%d %d %d %d %d %d",strcmp(ret->content, "OK !"), strcmp(ret->next->content, "OK !"),
		strcmp(ret->next->next->content, "OK !"), strcmp(l->content, " 1 2 3 "),
		strcmp(l->next->content, "ss"), strcmp(l->next->next->content, "-_-"));

	//////////////////////////////////////////////////////// ft_lstiter
	printf("\n\n ft_lstiter\n");

	ft_print_list(list);

	ft_lstiter(list, lstiter_f);

	ft_print_list(list);



	// t_list	*list;

	// bzero((list = malloc(sizeof(t_list))), sizeof(t_list));
	// bzero(((list->next) = malloc(sizeof(t_list))), sizeof(t_list));
	// ft_lstiter(list, lstiter_test);
	// printf("x%zu\n",list->content_size);
	// printf("x%zu\n",list->next->content_size);



	//////////////////////////////////////////////////////// ft_lstdel
	printf("\n\n ft_lstdel\n");

	t_list **plist;

	plist = &list;
	ft_lstdel(plist, lstdel_f);
	ft_print_list(list);




	//////////////////////////////////////////////////////// ft_lstadd
	printf("\n\n ft_lstadd\n");

	t_list *new = NULL;

	new = ft_lstnew("hello", 6);
	ft_lstadd(&list, new);
	ft_print_list(list);
/*
	//////////////////////////////////////////////////////// ft_lstfold
	printf("\n\n messed up stuff\n");


	list = ft_lstnew("asdef", 2000);
	list->next = ft_lstnew("qwer", 5);
	list->next->next = ft_lstnew("zxcv", 5);
	list->next->next->next = ft_lstnew("asdf", 5);
	list->next->next->next->next = ft_lstnew("last", 5);
	printf("%s\n",(char *)ft_lstfold(list, ft_strcat_fold));

	//////////////////////////////////////////////////////// ft_strsplit_to_lst
	printf("\n\n ft_strsplit_to_lst\n");

	char cs[] = "***xhello***felx*low**x*students*";
	ft_print_list(ft_strsplit_to_lst(cs, 'l'));

*/

	return (0);

}