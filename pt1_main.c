/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt1_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 10:12:58 by kfonda            #+#    #+#             */
/*   Updated: 2018/10/23 10:13:10 by kfonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int main()
{

	//////////////////////////////////////////////////////// ft_toupper
	printf("\n\n ft_toupper\n");

	printf("%c\n", ft_toupper('a') );
	printf("%c\n", ft_toupper('*') );
	printf("%c\n", ft_toupper('z') );
	printf("%c\n", ft_toupper('A') );


	//////////////////////////////////////////////////////// ft_tolower
	printf("\n\n ft_tolower\n");

	printf("%c\n", ft_tolower('a') );
	printf("%c\n", ft_tolower('*') );
	printf("%c\n", ft_tolower('Z') );
	printf("%c\n", ft_tolower('A') );


	//////////////////////////////////////////////////////// ft_strstr
	printf("\n\n ft_strstr\n");

	printf("%s : ", ft_strstr("hi", "hellohihello"));
	printf("%s\n", strstr("hi", "hellohihello"));
	printf("%s : ", ft_strstr("hellohihello", "hi"));
	printf("%s\n", strstr("hellohihello", "hi"));
	printf("%s : ", ft_strstr("hellohihello", ""));
	printf("%s\n", strstr("hellohihello", ""));


	//////////////////////////////////////////////////////// ft_strrchr
	printf("\n\n ft_strrchr\n");

	printf("%s : ", ft_strrchr("ayee", 'c') );
	printf("%s\n", strrchr("ayee", 'c') );
	printf("%s : ", ft_strrchr("ayee", 'y') );
	printf("%s\n", strrchr("ayee", 'y') );
	printf("%s : ", ft_strrchr("ayeeye", 'y') );
	printf("%s\n", strrchr("ayeeye", 'y') );
	//printf("%s : ", ft_strrchr("ayee", "") );
	//printf("%s\n", strrchr("ayee", "") );
	printf("%s : ", ft_strrchr("ayee", '\0') );
	printf("%s|\n", strrchr("ayee", '\0') );
	printf("%s : ", ft_strrchr("", '\0') );
	printf("%s|\n", strrchr("", '\0') );
	printf("%s : ", ft_strrchr("", 'y') );
	printf("%s\n", strrchr("", 'y') );


	//////////////////////////////////////////////////////// ft_strnstr
	printf("\n\n ft_strnstr\n");
	char	buf[10];

	bzero(buf, 10);
	strcpy(buf, "un deux 9");

	printf("0 %s : %s\n", ft_strnstr(buf, "9", 8), strnstr(buf, "9", 8));

	printf("0.1 %s : %s\n", ft_strnstr(buf, "9", 10), strnstr(buf, "9", 10));


	printf("1 %s : ", ft_strnstr("hi", "hellohihello", 3));
	printf("%s\n", strnstr("hi", "hellohihello", 3));
	printf("2 %s : ", ft_strnstr("", "hellohihello", 3));
	printf("%s\n", strnstr("", "hellohihello", 3));
	printf("3 %s : ", ft_strnstr("", "hellohihello", 3));
	printf("%s\n", strnstr("", "hellohihello", 3));
	printf("4 %s : ", ft_strnstr("hellohihello", "hi", 4));
	printf("%s\n", strnstr("hellohihello", "hi", 4));
	printf("5 %s : ", ft_strnstr("hellohihello", "hi", 10));
	printf("%s\n", strnstr("hellohihello", "hi", 10));
	printf("6 %s : ", ft_strnstr("hellohihello", "", 20));
	printf("%s\n", strnstr("hellohihello", "", 20));
	printf("7 %s : ", ft_strnstr("hellohihello", "", 2));
	printf("%s\n", strnstr("hellohihello", "", 2));
	printf("8 %s : ", ft_strnstr("", "hellohihello", 0));
	printf("%s\n", strnstr("", "hellohihello", 0));
	printf("9 %s : ", ft_strnstr("hellohihello", "", 0));
	printf("%s\n", strnstr("hellohihello", "", 0));
	printf("10 %s : ", ft_strnstr("", "", 0));
	printf("%s\n", strnstr("", "", 0));
	printf("10.1 %s : ", ft_strnstr("", "", 1));
	printf("%s\n", strnstr("", "", 1));
	printf("11 %s : ", ft_strnstr("", "hello",ft_strlen("hello")));
	printf("%s\n", strnstr("", "hello",ft_strlen("hello")));
	printf("12 %s : ", ft_strnstr("hello", "",ft_strlen("hello")));
	printf("%s\n", strnstr("hello", "", ft_strlen("hello")));
	//printf("%d\n", ft_strnstr("hello", "", ft_strlen("hello")) == strnstr("hello", "", ft_strlen("hello")));
	printf("13%s : ", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", ft_strlen("MZIRIBMZE")));
	printf("%s\n", strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", ft_strlen("MZIRIBMZE") + 1));
	printf("14%s : ", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", ft_strlen("MZIRIBMZIRIBMZE123")));
	printf("%s\n", strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", ft_strlen("MZIRIBMZIRIBMZE123") + 1));

	char	*s1 = "oh no not the empty string !";
	char	*s2 = "";
	size_t	max = strlen(s1);

	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);
	printf("%d\n", i1 == i2 );
	printf("15 %s, %s \n", i1, i2);

	char	*s3 = "AAAAAAAAAAAAA";
	size_t max1 = strlen(s3);

	char	*i3 = strnstr(s3, s3, max1);
	char	*i4 = ft_strnstr(s3, s3, max1);
	printf("%d \n", i3 == i4);
	printf("16 %s, %s \n", i3, i4);


	//////////////////////////////////////////////////////// ft_strncpy
	printf("\n\n ft_strncpy\n");


	char a[] = "yo yo yo YO";
	char b[] = "srcsrcsrc";
	printf("%s %s\n", a, b );
	printf("%s\n", ft_strncpy(a, b, 4));
	printf("%s %s\n\n", a, b);
	char c[] = "yo yo yo YO";
	char d[] = "srcsrcsrc";
	printf("%s %s\n", c, d );
	printf("%s\n", strncpy(c, d, 4));
	printf("%s %s\n\n", c, d);
	char aa[20] = "yo yo yo";
	char bb[] = "srcsrcsrc";
	printf("%s %s\n", aa, bb);
	printf("%s\n", ft_strncpy(aa, bb, 10));
	printf("? aa %s bb %s\n\n", aa, bb);
	char cc[20] = "yo yo yo";
	char dd[] = "srcsrcsrc";
	printf("%s %s\n", cc, dd);
	printf("%s\n", strncpy(cc, dd, 10));
	printf("? aa %s bb %s\n\n", cc, dd);
	char aaa[20] = "";
	char bbb[] = "srcsrcsrc";
	printf("%s %s\n", aaa, bbb);
	printf("%s\n", ft_strncpy(aaa, bbb, 1));
	printf("? aaa %s bbb %s\n\n", aaa, bbb);
	char ccc[20] = "";
	char ddd[] = "srcsrcsrc";
	printf("%s %s\n", ccc, ddd);
	printf("%s\n", strncpy(ccc, ddd, 1));
	printf("? aaa %s bbb %s\n\n", ccc, ddd);

	char aaaa[] = "destdest";
	char bbbb[] = "";
	printf("%s %s\n", aaaa, bbbb);
	printf("%s\n", ft_strncpy(aaaa, bbbb, 10));
	printf("? aaa %s bbb %s\n\n", aaaa, bbbb);

	char cccc[20] = "destdest";
	char dddd[] = "";
	printf("%s %s\n", cccc, dddd);
	printf("%s\n", strncpy(cccc, dddd, 10));
	printf("? aaa %s bbb %s\n\n", cccc, dddd);


	//////////////////////////////////////////////////////// ft_strncmp
	printf("\n\n ft_strncmp\n");

	printf("%d\n", ft_strncmp("a", "aaa", 1));
	printf("%d\n", strncmp("a", "aaa", 1));
	printf("%d\n", ft_strncmp("a", "aaa", 3));
	printf("%d\n", strncmp("a", "aaa", 3));
	printf("%d\n", ft_strncmp("a", "", 1));
	printf("%d\n", strncmp("a", "", 1));
	printf("%d\n", ft_strncmp("a", "", 0));
	printf("%d\n", strncmp("a", "", 0));
	printf("%d\n", ft_strncmp("", "aaa", 0));
	printf("%d\n", strncmp("", "aaa", 0));
	printf("%d\n", ft_strncmp("", "aaa", 10));
	printf("%d\n", strncmp("", "aaa", 10));
	printf("%d\n", ft_strncmp("aA", "aa", 1));
	printf("%d\n", strncmp("aA", "aa", 1));
	printf("%d\n", ft_strncmp("aA", "aa", 2));
	printf("%d\n", strncmp("aA", "aa", 2));
	printf("%d\n", ft_strncmp("aa", "aA", 10));
	printf("%d\n", strncmp("aa", "aA", 10));
	printf("%d\n", ft_strncmp("", "", 5));
	printf("%d\n", strncmp("", "", 5));
	printf("%d\n", ft_strncmp("", "", 0));
	printf("%d\n", strncmp("", "", 0));
	printf("%d\n", ft_strncmp("aa", "aa", 0));
	printf("%d\n", strncmp("aa", "aa", 0));



	//////////////////////////////////////////////////////// ft_strncat
	printf("\n\n ft_strncat\n");

	char ft_strncat_a[10] = "hi";
	char ft_strncat_b[] = "hello";
	printf("%s\n", ft_strncat(ft_strncat_a, ft_strncat_b, 3));
	char ft_strncat_aa[10] = "hi";
	char ft_strncat_bb[] = "hello";
	printf("%s\n", strncat(ft_strncat_aa, ft_strncat_bb, 3));

	char ft_strncat_aaa[10] = "";
	char ft_strncat_bbb[] = "hello";
	printf("%s\n", ft_strncat(ft_strncat_aaa, ft_strncat_bbb, 0));
	char ft_strncat_aaaa[10] = "";
	char ft_strncat_bbbb[] = "hello";
	printf("%s\n", strncat(ft_strncat_aaaa, ft_strncat_bbbb, 0));

	char ft_strncat_c[10] = "hi";
	char ft_strncat_d[] = "";
	printf("%s\n", ft_strncat(ft_strncat_c, ft_strncat_d, 1));
	char ft_strncat_cc[10] = "hi";
	char ft_strncat_dd[] = "";
	printf("%s\n", strncat(ft_strncat_cc, ft_strncat_dd, 1));

	printf("ft_strncat todo abort trap un-comment\n");
	// char ft_strncat_ccc[] = "hi";
	// char ft_strncat_ddd[] = "hello";
	// printf("%s\n", ft_strncat(ft_strncat_ccc, ft_strncat_ddd, 3));
	// char ft_strncat_cccc[] = "hi";
	// char ft_strncat_dddd[] = "hello";
	// printf("%s\n", strncat(ft_strncat_cccc, ft_strncat_dddd, 3)); /// TODO abort trap?

	//////////////////////////////////////////////////////// ft_strlen
	printf("\n\n ft_strlen\n");
	int h;

	h = ft_strlen("");
	printf("%d\n", h);
	h = ft_strlen("hi");
	printf("%d\n", h);
	h = ft_strlen("yooooooooo!!");
	printf("%d\n",h);
	h = ft_strlen("hello");
	printf("%d\n",h);




	//////////////////////////////////////////////////////// ft_memset
	printf("\n\n ft_memset\n");


	char str3[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str3);

    // Fill 8 characters starting from str[13] with '.'
    printf("%s\n", memset(str3 + 13, '.', 8*sizeof(char)));

    printf("After memset():  %s", str3);

    char str4[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore ft_memset(): %s\n", str4);

    // Fill 8 characters starting from str[13] with '.'
    printf("%s\n", ft_memset(str4 + 13, '.', 8*sizeof(char)));

    printf("After memset():  %s", str4);

    int n = 10;
    int arr[n];

    // Fill whole array with 0.
    printf("%s\n",memset(arr, 0, n*sizeof(arr[0])));
    printf("Array after memset()\n");
    ft_print_int_array(arr, n);


    int n2 = 10;
    int arr2[n2];

    // Fill whole array with 0.
    printf("%s\n",ft_memset(arr2, 0, n2*sizeof(arr2[0])));
    printf("Array after memset()\n");
    ft_print_int_array(arr2, n2);



	//////////////////////////////////////////////////////// ft_strlcat
	printf("\n\n ft_strlcat FIIIIIIIIIX TESTS\n");

	char ft_strlcat_a[10] = "hi";
	char ft_strlcat_b[] = "hello";
	printf("%zu ", ft_strlcat(ft_strlcat_a, ft_strlcat_b, 2));

	char ft_strlcat_aa[10] = "hi";
	char ft_strlcat_bb[] = "hello";
	printf("%lu ", strlcat(ft_strlcat_aa, ft_strlcat_bb, 2));
	printf("%s %s - ", ft_strlcat_a, ft_strlcat_b);
	printf("%s %s\n", ft_strlcat_aa, ft_strlcat_bb);

	char ft_strlcat_aaa[10] = "";
	char ft_strlcat_bbb[] = "hello";
	printf("%zu ", ft_strlcat(ft_strlcat_aaa, ft_strlcat_bbb, 0));
	char ft_strlcat_aaaa[10] = "";
	char ft_strlcat_bbbb[] = "hello";
	printf("%lu ", strlcat(ft_strlcat_aaaa, ft_strlcat_bbbb, 0));
	printf("%s %s - ", ft_strlcat_aaa, ft_strlcat_bbb);
	printf("%s %s\n", ft_strlcat_aaaa, ft_strlcat_bbbb);

	char ft_strlcat_aaaaa[10] = "h";
	char ft_strlcat_bbbbb[] = "hello";
	printf("%zu ", ft_strlcat(ft_strlcat_aaaaa, ft_strlcat_bbbbb, 0));
	char ft_strlcat_aaaaaa[10] = "h";
	char ft_strlcat_bbbbbb[] = "hello";
	printf("%lu ", strlcat(ft_strlcat_aaaaaa, ft_strlcat_bbbbbb, 0));
	printf("%s %s - ", ft_strlcat_aaaaa, ft_strlcat_bbbbb);
	printf("%s %s\n", ft_strlcat_aaaaaa, ft_strlcat_bbbbbb);

	char e[10] = "";
	char f[] = "hello";
	printf("%zu ", ft_strlcat(e, f, 10));
	char ee[10] = "";
	char ff[] = "hello";
	printf("%lu ", strlcat(ee, ff, 10));
	printf("%s %s - ", e, f);
	printf("%s %s\n", ee, ff);

	char ft_strlcat_c[10] = "hiiiiii";
	char ft_strlcat_d[] = "ii";
	printf("%zu ", ft_strlcat(ft_strlcat_c, ft_strlcat_d, 2));

	char ft_strlcat_cc[10] = "hiiiiii";
	char ft_strlcat_dd[] = "ii";
	printf("%lu ", strlcat(ft_strlcat_cc, ft_strlcat_dd, 2));
	printf("%s %s - ", ft_strlcat_c, ft_strlcat_d);
	printf("%s %s\n", ft_strlcat_cc, ft_strlcat_dd);
	char ft_strlcat_ccc[] = "hi";
	char ft_strlcat_ddd[] = "hello";
	printf("%zu ", ft_strlcat(ft_strlcat_ccc, ft_strlcat_ddd, 3));

	char ft_strlcat_cccc[] = "hi";
	char ft_strlcat_dddd[] = "hello";
	printf("%lu ", strlcat(ft_strlcat_cccc, ft_strlcat_dddd, 3)); /// TODO abort trap?
	printf("%s %s - ", ft_strlcat_ccc, ft_strlcat_ddd);
	printf("%s %s\n", ft_strlcat_cccc, ft_strlcat_dddd);

	//////////////////////////////////////////////////////// ft_strdup
	printf("\n\n ft_strdup\n");

	printf("%s\n", ft_strdup("hi"));

	//////////////////////////////////////////////////////// ft_strcpy
	printf("\n\n ft_strcpy FIIIIIIIIIX TESTS\n");

	char ft_strcpy_e[] = "yo yo yo YO";
	char ft_strcpy_f[] = "srcsrcsrc";
	printf("%s %s\n", ft_strcpy_e, ft_strcpy_f );
	printf("%s\n", ft_strcpy(ft_strcpy_e, ft_strcpy_f));
	printf("%s %s\n\n", ft_strcpy_e, ft_strcpy_f);
	char ft_strcpy_g[] = "yo yo yo YO";
	char ft_strcpy_j[] = "srcsrcsrc";
	printf("%s %s\n", ft_strcpy_g, ft_strcpy_j );
	printf("%s\n", strcpy(ft_strcpy_g, ft_strcpy_j));
	printf("%s %s\n\n", ft_strcpy_g, ft_strcpy_j);



	/////////// TODO FIX THIS
	// char aa[] = "yo yo yo";
	// char bb[] = "srcsrcsrc";
	// printf("%s %s\n", aa, bb);
	// printf("%s\n", ft_strcpy(aa, bb));
	// printf("? aa %s bb %s\n\n", aa, bb); /// why no b? also there was an abort error earlier on. if only this part - abort trap comes up
	// char cc[] = "yo yo yo";
	// char dd[] = "srcsrcsrc";
	// printf("%s %s\n", cc, dd);
	// printf("%s\n", strcpy(cc, dd));
	// printf("? aa %s bb %s\n\n", cc, dd);

	// ///TODO more abort trap
	// char aaa[] = "";
	// char bbb[] = "srcsrcsrc";
	// printf("%s %s\n", aaa, bbb);
	// printf("%s\n", ft_strcpy(aaa, bbb));
	// printf("? aaa %s bbb %s\n\n", aaa, bbb); /// confusing - if this only tested it shows only a part of bbb.
	// char ccc[] = "";
	// char ddd[] = "srcsrcsrc";
	// printf("%s %s\n", ccc, ddd);
	// printf("%s\n", strcpy(ccc, ddd));
	// printf("? aaa %s bbb %s\n\n", ccc, ddd);

	///////

	char eeee[] = "destdest";
	char ffff[] = "";
	printf("%s %s\n", eeee, ffff);
	printf("%s\n", ft_strcpy(eeee, ffff));
	printf("? aaa %s bbb %s\n\n", eeee, ffff);

	char gggg[] = "destdest";
	char hhhh[] = "";
	printf("%s %s\n", gggg, hhhh);
	printf("%s\n", strcpy(gggg, hhhh));
	printf("? aaa %s bbb %s\n\n", gggg, hhhh);



	//////////////////////////////////////////////////////// ft_strcat
	printf("\n\n ft_strcat\n");

	char ft_strcat_a[10] = "hi";
	char ft_strcat_b[] = "hello";
	printf("%s\n", ft_strcat(ft_strcat_a, ft_strcat_b));
	char ft_strcat_aa[10] = "hi";
	char ft_strcat_bb[] = "hello";
	printf("%s\n", strcat(ft_strcat_aa, ft_strcat_bb));

	char ft_strcat_aaa[10] = "";
	char ft_strcat_bbb[] = "hello";
	printf("%s\n", ft_strcat(ft_strcat_aaa, ft_strcat_bbb));
	char ft_strcat_aaaa[10] = "";
	char ft_strcat_bbbb[] = "hello";
	printf("%s\n", strcat(ft_strcat_aaaa, ft_strcat_bbbb));

	char ft_strcat_c[10] = "hi";
	char ft_strcat_d[] = "";
	printf("%s\n", ft_strcat(ft_strcat_c, ft_strcat_d));
	char ft_strcat_cc[10] = "hi";
	char ft_strcat_dd[] = "";
	printf("%s\n", strcat(ft_strcat_cc, ft_strcat_dd));

	printf("ft_strcat todo abort trap un-comment\n");
	// char ft_strcat_ccc[] = "hi";
	// char ft_strcat_ddd[] = "hello";
	// printf("%s\n", ft_strcat(ft_strcat_ccc, ft_strcat_ddd));
	// char ft_strcat_cccc[] = "hi";
	// char ft_strcat_dddd[] = "hello";
	// printf("%s\n", strcat(ft_strcat_cccc, ft_strcat_dddd)); /// TODO abort trap?


	//////////////////////////////////////////////////////// ft_strcmp
	printf("\n\n ft_strcmp\n");

	printf("%d\n", ft_strcmp("a", "aaa"));
	printf("%d\n", strcmp("a", "aaa"));
	printf("%d\n", ft_strcmp("a", ""));
	printf("%d\n", strcmp("a", ""));
	printf("%d\n", ft_strcmp("", "aaa"));
	printf("%d\n", strcmp("", "aaa"));
	printf("%d\n", ft_strcmp("aA", "aa"));
	printf("%d\n", strcmp("aA", "aa"));
	printf("%d\n", ft_strcmp("aa", "aA"));
	printf("%d\n", strcmp("aa", "aA"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", strcmp("", ""));
	printf("%d\n", ft_strcmp("aa", "aa"));
	printf("%d\n", strcmp("aa", "aa"));
	printf("%d\n", ft_strcmp("a", ""));
	printf("%d\n", strcmp("a", ""));
	printf("%d\n", ft_strcmp("", "aaa"));
	printf("%d\n", strcmp("", "aaa"));


	//////////////////////////////////////////////////////// ft_strchr
	printf("\n\n ft_strchr\n");

	printf("%s : ", ft_strchr("ayee", 'c') );
	printf("%s\n", strchr("ayee", 'c') );
	printf("%s : ", ft_strchr("ayee", 'y') );
	printf("%s\n", strchr("ayee", 'y') );
	printf("%s : ", ft_strchr("ayeeye", 'y') );
	printf("%s\n", strchr("ayeeye", 'y') );
	//printf("%s : ", ft_strchr("ayee", "") );
	//printf("%s\n", strchr("ayee", "") );
	printf("%s : ", ft_strchr("ayee", '\0') );
	printf("%s|\n", strchr("ayee", '\0') );
	printf("%s : ", ft_strchr("", '\0') );
	printf("%s|\n", strchr("", '\0') );
	printf("%s : ", ft_strchr("", 'y') );
	printf("%s\n", strchr("", 'y') );


	//////////////////////////////////////////////////////// ft_memmove
	printf("\n\n ft_memmove\n");

	char strx[50] = "Geeks";
	char destx[50] = "ForGeeks is for geeks.";

    printf("Before memmove(): %s %s\n", strx, destx);

    // Fill 8 characters starting from str[13] with '.'
    printf("%s\n", memmove(destx, strx, 1 * sizeof(char)));


    printf("After memmove(): %s%s\n", strx, destx);

    char str2x[50] = "Geeks";
	char dest2x[50] = "ForGeeks is for geeks.";

    printf("Before ft_memmove(): %s %s\n", str2x, dest2x);

    // Fill 8 characters starting from str[13] with '.'
    printf("%s\n", ft_memmove(dest2x, str2x, 1 * sizeof(char)));

    printf("After ft_memmove(): %s%s\n", str2x, dest2x);


	//////////////////////////////////////////////////////// ft_memcpy
	printf("\n\n ft_memcpy\n");

	char str10[] = "Geeks";
	char str20[] = "Quiz";
	char str0[] = "a";

	printf("%s str1 before memcpy\n", str10);
	// Copies contents of str2 to sr1
	printf("%s \n", memcpy (str10, str20, sizeof(str0)));

	printf("%s str1 after memcpy\n", str10);

	char stra0[] = "Geeks";
	char strb0[] = "Quiz";

	printf("%s stra before ft_memcpy\n", stra0);

	// Copies contents of str2 to sr1
	printf("%s \n", ft_memcpy(stra0, strb0, sizeof(str0)));
	printf("%s stra after ft_memcpy\n", stra0);

	//puts("\nstra after memcpy ");
	//puts(stra);


	//////////////////////////////////////////////////////// ft_memcmp
	printf("\n\n ft_memcmp\n");

	printf("%d\n", ft_memcmp("a", "aaa", 1));
	printf("%d\n", memcmp("a", "aaa", 1));
	printf("%d\n", ft_memcmp("a", "aaa", 3));
	printf("%d\n", memcmp("a", "aaa", 3));
	printf("%d\n", ft_memcmp("a", "", 1));
	printf("%d\n", memcmp("a", "", 1));
	printf("%d\n", ft_memcmp("a", "", 0));
	printf("%d\n", memcmp("a", "", 0));
	printf("%d\n", ft_memcmp("", "aaa", 0));
	printf("%d\n", memcmp("", "aaa", 0));
	printf("%d\n", ft_memcmp("", "aaa", 10));
	printf("%d\n", memcmp("", "aaa", 10));
	printf("%d\n", ft_memcmp("aA", "aa", 1));
	printf("%d\n", memcmp("aA", "aa", 1));
	printf("%d\n", ft_memcmp("aA", "aa", 2));
	printf("%d\n", memcmp("aA", "aa", 2));
	printf("%d\n", ft_memcmp("aa", "aA", 10));
	printf("%d\n", memcmp("aa", "aA", 10));
	printf("%d\n", ft_memcmp("", "", 5));
	printf("%d\n", memcmp("", "", 5));
	printf("%d\n", ft_memcmp("", "", 0));
	printf("%d\n", memcmp("", "", 0));
	printf("%d\n", ft_memcmp("aa", "aa", 0));
	printf("%d\n", memcmp("aa", "aa", 0));

	char *s1_memcmp = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2_memcmp = "\xff\xaa\xde\x02";
	size_t size = 8;
	int i2_memcmp = ft_memcmp(s1_memcmp, s2_memcmp, size);
	int i1_memcmp = memcmp(s1_memcmp, s2_memcmp, size);
	printf("%d\n", i1_memcmp );
	printf("%d\n", i2_memcmp );
	// TODO why different memcmp gives 1 or 0 or -1 ft_memcmp gives whole answer

	//////////////////////////////////////////////////////// ft_memchr
	printf("\n\n ft_memchr\n");


	printf("\n\n ft_memchr\n");
	printf("1 %s : ", ft_memchr("ayee", 'c', 1) );
	printf("%s\n", memchr("ayee", 'c', 1) );
	printf("2 %s : ", ft_memchr("ayee", 'y', 1) );
	printf("%s\n", memchr("ayee", 'y', 1) );
	printf("3 %s : ", ft_memchr("ayeeye", 'y', 4) );
	printf("%s\n", memchr("ayeeye", 'y', 4) );
	// printf("%s\n", ft_memchr("ayee", '', 1) );
	// printf("%s\n", memchr("ayee", '', 1) );
	printf("4 %s : ", ft_memchr("ayee", '\0', 1) );
	printf("%s\n", memchr("ayee", '\0', 1) );
	printf("5 %s : ", ft_memchr("", '\0', 1) );
	printf("%s|\n", memchr("", '\0', 1) );
	printf("6 %s : ", ft_memchr("", 'y', 1) );
	printf("%s\n", memchr("", 'y', 1) );
	printf("7 %s : ", ft_memchr("abcdef", 999, 6) );
	printf("%s\n", memchr("abcdef", 999, 6) );
	printf("== %d : ", ft_memchr("abcdef", 999, 6) == memchr("abcdef", 999, 6) );


	//////////////////////////////////////////////////////// ft_memccpy
	printf("\n\n ft_memccpy\n");

	char str1[] = "Geeks";
	char str2[] = "Quiz";
	char strc[] = "a";

	printf("%s str1 before memccpy\n", str1);
	// Copies contents of str2 to sr1
	printf("%s \n", memccpy (str1, str2, 'o', sizeof(strc)));
	printf("%s str1 after memccpy\n", str1);
	char stra[] = "Geeks";
	char strb[] = "Quiz";
	printf("%s stra before ft_memccpy\n", stra);
	// Copies contents of strb to sra
	printf("%s \n", ft_memccpy(stra, strb, 'o', sizeof(strc)));
	printf("%s stra after ft_memccpy\n", stra);

	// TODO learn puts
	//puts("\nstra after memccpy ");
	//puts(stra);

	//////////////////////////////////////////////////////// ft_isprint
	printf("\n\n ft_isprint\n");

	printf("%d\n", ft_isprint('1') );
	printf("%d\n", ft_isprint('d') );
	printf("%d\n", ft_isprint(8) );
	printf("%d\n", ft_isprint('A') );
	printf("%d\n", ft_isprint('Z') );
	printf("%d\n", ft_isprint('a') );
	printf("%d\n", ft_isprint('z') );
	printf("%d\n", ft_isprint('/') );
	printf("%d\n", ft_isprint(':') );
	printf("%d\n", ft_isprint('@') );
	printf("%d\n", ft_isprint('[') );
	printf("%d\n", ft_isprint('`') );
	printf("%d\n", ft_isprint(' ') );
	printf("%d\n", ft_isprint('	') ); // tab


	//////////////////////////////////////////////////////// ft_isdigit
	printf("\n\n ft_isdigit\n");

	printf("%d\n", ft_isdigit('1') );
	printf("%d\n", ft_isdigit('d') );
	printf("%d\n", ft_isdigit('0') );
	printf("%d\n", ft_isdigit('9') );
	printf("%d\n", ft_isdigit('/') );
	printf("%d\n", ft_isdigit(':') );
	printf("%d\n", ft_isdigit(8) );

	//////////////////////////////////////////////////////// ft_isascii
	printf("\n\n ft_isascii\n");

	printf("%d\n", ft_isascii('1') );
	printf("%d\n", ft_isascii('d') );
	printf("%d\n", ft_isascii(8) );
	printf("%d\n", ft_isascii('A') );
	printf("%d\n", ft_isascii('Z') );
	printf("%d\n", ft_isascii('a') );
	printf("%d\n", ft_isascii(1) );
	//printf("%d\n", ft_isascii('Č') ); TODO


	//////////////////////////////////////////////////////// ft_isalpha
	printf("\n\n ft_isalpha\n");

	printf("%d\n", ft_isalpha('1') );
	printf("%d\n", ft_isalpha('d') );
	printf("%d\n", ft_isalpha(8) );
	printf("%d\n", ft_isalpha('A') );
	printf("%d\n", ft_isalpha('Z') );
	printf("%d\n", ft_isalpha('a') );
	printf("%d\n", ft_isalpha('z') );
	printf("%d\n", ft_isalpha('/') );
	printf("%d\n", ft_isalpha(':') );
	printf("%d\n", ft_isalpha('@') );
	printf("%d\n", ft_isalpha('[') );
	printf("%d\n", ft_isalpha('`') );
	printf("%d\n", ft_isalpha('{') );


	//////////////////////////////////////////////////////// ft_isalnum
	printf("\n\n ft_isalnum\n");



	printf("%d\n", ft_isalnum('0') );
	printf("%d\n", ft_isalnum('d') );
	printf("%d\n", ft_isalnum('A') );
	printf("%d\n", ft_isalnum('Z') );
	printf("%d\n", ft_isalnum('a') );
	printf("%d\n", ft_isalnum('z') );
	printf("%d\n", ft_isalnum('9') );
	printf("nm ?? %d\n", ft_isalnum(8) );
	printf("%d\n", ft_isalnum('/') );
	printf("%d\n", ft_isalnum(':') );
	printf("%d\n", ft_isalnum('@') );
	printf("%d\n", ft_isalnum('[') );
	printf("%d\n", ft_isalnum('`') );
	printf("%d\n", ft_isalnum('{') );


	//////////////////////////////////////////////////////// ft_bzero
	printf("\n\n ft_bzero\n");

	char test[260] = "yoyooyoyoyoyooyoyooyoyoyoyo";
	bzero(test, 5);
	printf("5%c\n", test[4]);
	printf("5%c\n", test[10]);

	char test2[260] = "yoyooyoyoyoyooyoyooyoyoyoyo";
	ft_bzero(test2, 5);
	printf("6%c\n", test2[6]);
	printf("5%c\n", test2[10]);


	//////////////////////////////////////////////////////// ft_atoi
	printf("\n\n ft_atoi\n");
	int w;

	w = ft_atoi("4");
	printf("%d\n", w );
	w = atoi("4");
	printf("%d\n\n", w );
	w = ft_atoi("42");
	printf("%d\n", w );
	w = atoi("42");
	printf("%d\n\n", w );
	w = ft_atoi("0");
	printf("%d \n", w );
	w = atoi("0");
	printf("%d \n\n", w );
	w = ft_atoi("87364");
	printf("%d\n", w );
	w = atoi("87364");
	printf("%d\n\n", w );
	w = ft_atoi("-42");
	printf("%d\n", w );
	w = atoi("-42");
	printf("%d\n\n", w );
	w = ft_atoi("-aa");
	printf("%d\n", w );
	w = atoi("-aa");
	printf("%d\n\n", w );
	w = ft_atoi("hello 123 a 45");
	printf("%d\n", w );
	w = atoi("hello 123 a 45");
	printf("%d\n\n", w );
	w = ft_atoi("hi12a2");
	printf("%d\n", w );
	w = atoi("hi12a2");
	printf("%d\n\n", w );
	w = ft_atoi(" 12a2");
	printf("%d\n", w );
	w = atoi(" 12a2");
	printf("%d\n\n", w );
	w = ft_atoi(" 12 2");
	printf("%d\n", w );
	w = atoi(" 12 2");
	printf("%d\n\n", w );
	w = ft_atoi("-2147483648");
	printf("%d\n", w );
	w = atoi("-2147483648");
	printf("%d\n\n", w );
	w = ft_atoi("\t\n\v\f\r +256");
	printf("%d\n", w );
	w = atoi("\t\n\v\f\r +256");
	printf("%d\n\n", w );
	w = ft_atoi("\t\n\v\f\r +++256");
	printf("%d\n", w );
	w = atoi("\t\n\v\f\r +++256");
	printf("%d\n\n", w );
	w = ft_atoi("\t\n\v\f\r ---256");
	printf("%d\n", w );
	w = atoi("\t\n\v\f\r ----256");
	printf("%d\n\n", w );
	w = ft_atoi("\t\n\v\f\r");
	printf("%d\n", w );
	w = atoi("\t\n\v\f\r");
	printf("%d\n\n", w );
	w = ft_atoi("99999999999999999999999999");
	printf("%d\n", w );
	w = atoi("99999999999999999999999999");
	printf("%d\n\n", w );
	w = ft_atoi("-99999999999999999999999999");
	printf("%d\n", w );
	w = atoi("-99999999999999999999999999");
	printf("%d\n\n", w );


	return (0);
}
