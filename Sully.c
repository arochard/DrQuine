#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define R '\n'
#define T '\t'
#define Q '"'

int		main()
{
	FILE *f;
	int i = 5;
	char str[10];
	sprintf(str, "Sully_%d.c", --i);
	f = fopen(str, "w");
	char *s1 = "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%c#define R '\\n'%c#define T '\\t'%c#define Q '%c'%c%cint%c%cmain()%c{%c%cFILE *f;%c%cint i = %d;%c%cchar str[10];%c%csprintf(str, %cSully_%%d.c%c, --i);%c%cf = fopen(str, %cw%c);%c%c";
	char *s2 = "char *s1 = %c%s%c%c%cchar *s2 = %c%s%c %c%cfprintf(f, s1, R, R, R, R, R, R, Q, R, R, T, T, R, R, T, R, T, i, R, T, R, T, Q, Q, R, T, Q, Q, R, T);%c%cfprintf(f, s2, Q, s1, Q, R, T, Q, s2, Q, R, T, R, T, R, T, R, T, R);%c%cfclose(f);%c%creturn (0);%c}";
	fprintf(f, s1, R, R, R, R, R, R, Q, R, R, T, T, R, R, T, R, T, i, R, T, R, T, Q, Q, R, T, Q, Q, R, T);
	fprintf(f, s2, Q, s1, Q, R, T, Q, s2, Q, R, T, R, T, R, T, R, T, R);
	fclose(f);
	return (0);
}