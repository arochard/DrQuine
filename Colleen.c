#include <stdio.h>

void		foo()
{
}
/*
	comment
*/
int		main()
{
	/*
		comment
	*/
	char *s1="#include <stdio.h>%c%cvoid%c%cfoo()%c{%c}%c/*%c%ccomment%c*/%cint%c%cmain()%c{%c%c/*%c%c%ccomment%c%c*/%c%c";
	char *s2="char *s1=%c%s%c;%c%cchar *s2=%c%s%c;%c%cchar n='%cn', q='%c', b='%c%c', t='%ct';%c%cprintf(s1, n, n, t, t, n, n, n, n, t, n, n, t, t, n, n, t, n, t, t, n, t, n, t);%c%cprintf(s2, q, s1, q, n, t, q, s2, q, n, t, b, q, b, b, b, n, t, n, t, n, t, n);%c%creturn(0);%c}";
	char n='\n', q='"', b='\\', t='\t';
	printf(s1, n, n, t, t, n, n, n, n, t, n, n, t, t, n, n, t, n, t, t, n, t, n, t);
	printf(s2, q, s1, q, n, t, q, s2, q, n, t, b, q, b, b, b, n, t, n, t, n, t, n);
	return(0);
}