#include "libft.h"
#include <stdio.h>


char	ft_toupper_map(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}


char	ft_toupper_mapi(unsigned int i, char c)
{
	i += 0;
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

void	ft_toupper_f_striteri(unsigned int x, char *c)
{
	int i;

	i = x;
	i = 0;
	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		i++;
	}
}

void	ft_toupper_f_striter(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		i++;
	}
	//return (c);
}

int main()
{


	//////////////////////////////////////////////////////// ft_atoi
	printf("\n ft_putchar\n");
	//int j = L'Ã¸';
	int j = 98;
	ft_putchar(j);
	printf(" : b\n");


	//////////////////////////////////////////////////////// ft_striter
	printf("\n\n ft_striter\n");

	char a[] = "hello";
	printf("%s\n", a);
	ft_striter(a, ft_toupper_f_striter);
	printf("%s : HELLO\n", a);


	//////////////////////////////////////////////////////// ft_striteri
	printf("\n\n ft_striteri\n");

	char v[] = "hello";
	printf("%s\n", v);
	ft_striteri(v, ft_toupper_f_striteri);
	printf("%s : HELLO\n", v);


	//////////////////////////////////////////////////////// ft_strdel
	printf("\n\n ft_strdel\n");

	char **as;
	char *c;
	char *b;

	c = (char *)malloc(sizeof(char) * 4);
	c[0] = 'h';
	c[1] = 'i';
	c[2] = '\0';

	b = (char *)malloc(sizeof(char) * 4);
	b[0] = 'h';
	b[1] = 'b';
	b[2] = '\0';

	as = (char **)malloc(sizeof(char*) * 3);
	as = &c;
	as++;
	as = &b;

	// as[1] = (char *)malloc(sizeof(char) * 7);
	// as[0] = (char *)malloc(sizeof(char) * 7);
	// as[2] = (char *)malloc(sizeof(char) * 7);
	// as[0] = c;
	printf("af %s\n", as[0] );
	printf("af %s\n", as[1] );
	printf("size bf %lu\n", sizeof(as));

	// printf("bf %s\n", as[0] );
	// as[1] = "el";
	// printf("bf %s\n", as[1] );
	// as[2] = "pp";
	// printf("bf %s\n", as[2] );
	//as[3] = (NULL);

	ft_strdel(as);
	as++;
	ft_strdel(as);
	//free(as);
	printf("size af %lu\n", sizeof(as));
	as--;
	printf("af %s\n", as[0] );
	printf("af %s\n", as[1] );
	printf("af %s\n", as[2] );
	//printf("af %s\n", as[3] );

	printf("maybe:\naf hb\naf hi\nsize bf 8\nsize af 8\naf (null)\naf (null)\naf\n");



	//////////////////////////////////////////////////////// ft_strsplit
	printf("\n\n ft_strsplit\n");

	//printf("%d\n", count_words("*hello*fellow***students*", '*'));
	char cs[] = "***xhello***felx*low**x*students*";
	//char cs[] = "***";
	char **wl;
	wl = ft_strsplit(cs, '*');
	printf("%s : xhello\n", wl[0]);
	printf("%s : felx\n", wl[1]);
	printf("%s : low\n", wl[2]);
	printf("%s : x\n", wl[3]);
	printf("%s : students\n", wl[4]);


	//////////////////////////////////////////////////////// ft_memalloc
	printf("\n\n ft_memalloc\n");

	char *strt;
	int *intarr;

	strt = ft_memalloc(sizeof(char) * 8);
	printf("%s\n", strt );
	//strt = "hi";
	 strt[0] = 'a';
	 strt[1] = 'b';
	// strt[2] = 'c';
	// strt[3] = '\0';
	printf("%s : ab\n", strt );
	printf("%d : 97\n", strt[0]);
	printf("%d : 0\n", strt[2]);

	intarr = ft_memalloc(sizeof(int) * 4);
	//intarr[0] = 1;
	intarr[1] = 2;
	printf("%d : 0\n", intarr[0]);
	printf("%d : 2\n", intarr[1]);


	//////////////////////////////////////////////////////// ft_strmapi
	printf("\n\n ft_strmapi\n");

	char k[] = "hello";
	printf("%s\n", k);
	char *l = ft_strmapi(k, ft_toupper_mapi);
	printf("%s : HELLO\n", l);


	//////////////////////////////////////////////////////// ft_strtrim
	printf("\n\n ft_strtrim\n");

	char m[] = "   \n\n hello hi hi\t \n \t";
	printf("|%s| : |hello hi hi|\n", ft_strtrim(m));

	char n[] ="  \t \t \n   \n\n\n\t";
	printf("|%s| : ||\n", ft_strtrim(n));

	char o[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("|%s| : |Hello 	  Please\n Trim me !|\n", ft_strtrim(o));


	//////////////////////////////////////////////////////// ft_strjoin
	printf("\n\n ft_strjoin\n");

	char a1[] = "hello";
	char a2[] = "hi";
	printf("%s : hellohi\n", ft_strjoin(a1, a2));

	char a3[] = "hello";
	char a4[] = "";
	printf("%s : hello\n", ft_strjoin(a3, a4));


	//////////////////////////////////////////////////////// ft_strsub
	printf("\n\n ft_strsub\n");

	char to_str[] = "berrymore";
	printf("%s : rry\n", ft_strsub(to_str, 2, 3));


	//////////////////////////////////////////////////////// ft_strnequ
	printf("\n\n ft_strnequ\n");


	printf("%d 1\n", ft_strnequ("a", "aaa", 1));
	// // //printf("%d\n", memcmp("a", "aaa", 1));
	printf("%d 0\n", ft_strnequ("a", "aaa", 3));
	// // //printf("%d\n", memcmp("a", "aaa", 3));
	printf("%d 0\n", ft_strnequ("a", "", 1));
	// // //printf("%d\n", memcmp("a", "", 1));
	printf("%d 1\n", ft_strnequ("a", "", 0));
	printf("%d 1\n", ft_strnequ("ededeqdf", "", 0));
	// // //printf("%d\n", memcmp("a", "", 0));
	printf("%d 1\n", ft_strnequ("", "aaa", 0));
	// // //printf("%d\n", memcmp("", "aaa", 0));
	printf("%d 0\n", ft_strnequ("", "aaa", 10));
	// // //printf("%d\n", memcmp("", "aaa", 10));
	printf("%d 1\n", ft_strnequ("aA", "aa", 1));
	// // //printf("%d\n", memcmp("aA", "aa", 1));
	printf("%d 0\n", ft_strnequ("aA", "aa", 2));
	// // //printf("%d\n", memcmp("aA", "aa", 2));
	printf("%d 0\n", ft_strnequ("aa", "aA", 10));
	// // //printf("%d\n", memcmp("aa", "aA", 10));
	printf("%d 1\n", ft_strnequ("", "", 5));
	// // //printf("%d\n", memcmp("", "", 5));
	printf("%d 1\n", ft_strnequ("", "", 0));
	// // //printf("%d\n", memcmp("", "", 0));
	printf("%d 1\n", ft_strnequ("aa", "aa", 0));
	// // //printf("%d\n", memcmp("aa", "aa", 0));

	printf("%d 0\n", ft_strnequ(NULL, NULL, 0)); //?
	printf("%d 0\n", ft_strnequ(NULL, NULL, 1));
	printf("%d 0\n", ft_strnequ(NULL, "", 1));
	printf("%d 0\n", ft_strnequ("", NULL, 1));

	printf("%d 1\n", ft_strnequ("", "", 1));

	printf("%d 1\n", ft_strnequ("abc", "abc", 2));
	// printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"abc\", \"abc\", 2).\nExpected ret = \"1\" \
	// 		   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);

	printf("%d 0\n", ft_strnequ("cba", "abc", 2));
	// printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"cba\", \"abc\", 2).\nExpected ret = \"0\" \
	// 		   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
	printf("%d 0\n", ft_strnequ("abc", "cba", 2));
	// {
	// 	printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"abc\", \"cba\", 2).\nExpected ret = \"0\" \
	// 		   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);

	// }
	printf("%d 1\n", ft_strnequ("abc", "abd", 2));
	// {
	// 	printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"abc\", \"abd\", 2).\nExpected ret = \"1\" \
	// 		   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
	// }
	printf("%d 1\n", ft_strnequ("", "", 3));
	// {
	// 	printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"\", \"\", 3).\nExpected ret = \"1\" \
	// 		   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
	// }


	//////////////////////////////////////////////////////// ft_strequ
	printf("\n\n ft_strequ\n");

	printf("%d 0\n", ft_strequ("a", "aaa"));
	// // //printf("%d\n", memcmp("a", "aaa", 1));
	printf("%d 0\n", ft_strequ("a", "aaa"));
	// // //printf("%d\n", memcmp("a", "aaa", 3));
	printf("%d 0\n", ft_strequ("a", ""));
	// // //printf("%d\n", memcmp("a", "", 1));
	printf("%d 0\n", ft_strequ("a", ""));
	// // //printf("%d\n", memcmp("a", "", 0));
	printf("%d 0\n", ft_strequ("", "aaa"));
	// // //printf("%d\n", memcmp("", "aaa", 0));
	printf("%d 0\n", ft_strequ("", "aaa"));
	// // //printf("%d\n", memcmp("", "aaa", 10));
	printf("%d 0\n", ft_strequ("aA", "aa"));
	// // //printf("%d\n", memcmp("aA", "aa", 1));
	printf("%d 0\n", ft_strequ("aA", "aa"));
	// // //printf("%d\n", memcmp("aA", "aa", 2));
	printf("%d 0\n", ft_strequ("aa", "aA"));
	// // //printf("%d\n", memcmp("aa", "aA", 10));
	printf("%d 1\n", ft_strequ("", ""));
	// // //printf("%d\n", memcmp("", "", 5));
	printf("%d 1\n", ft_strequ("", ""));
	// // //printf("%d\n", memcmp("", "", 0));
	printf("%d 1\n", ft_strequ("aa", "aa"));
	// // //printf("%d\n", memcmp("aa", "aa", 0));


	//////////////////////////////////////////////////////// ft_strmap
	printf("\n\n ft_strmap\n");

	char q[] = "hello";
	printf("%s\n", q);
	char *r = ft_strmap(q, ft_toupper_map);
	printf("%s : HELLO\n", r);


	//////////////////////////////////////////////////////// ft_strnew
	printf("\n\n ft_strnew\n");

	char *str;

	str = ft_strnew(sizeof(char) * 10);
	str[0]= 'o';
	printf("%s : o\n", str);
	str[9]= 'x';
	printf("%s : o\n", str);
	printf("%c : x\n", str[9]);


	//////////////////////////////////////////////////////// ft_strclr
	printf("\n\n ft_strclr\n");

	char ss[] = "hello\n";
	printf("%s to nothing : ", ss);
	ft_strclr(ss);
	printf("%s|", ss);


	//////////////////////////////////////////////////////// ft_itoa
	printf("\n\n ft_itoa\n");

	printf("%s : -2147483648\n", ft_itoa(-2147483648));
	printf("%s : 5\n", ft_itoa(5));
	printf("%s : 0\n", ft_itoa(0));


}