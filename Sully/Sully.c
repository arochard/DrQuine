#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#define B '\\'
#define R '\n'
#define T '\t'
#define Q '"'

int		main(int argc, char **argv)
{
	FILE *f;
	int i = 5;
	char str[20];
	char com[65];
	(void)argc;
	if (strcmp(argv[0], "./Sully") != 0){i--;}
	if(i == -1){return(0);}
	sprintf(str, "Sully_%d.c", i);
	f = fopen(str, "w");
	char *s1 = "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <string.h>%c%c#define B '%c%c'%c#define R '%cn'%c#define T '%ct'%c#define Q '%c'%c%cint%c%cmain(int argc, char **argv)%c{%c%cFILE *f;%c%cint i = %d;%c%cchar str[20];%c%cchar com[65];%c%c(void)argc;%c%cif (strcmp(argv[0], %c./Sully%c) != 0){i--;}%c%cif(i == -1){return(0);}%c%csprintf(str, %cSully_%%d.c%c, i);%c%cf = fopen(str, %cw%c);%c%c";
	char *s2 = "char *s1 = %c%s%c;%c%cchar *s2 = %c%s%c;%c%cfprintf(f, s1, R, R, R, R, R, B, B, R, B, R, B, R, Q, R, R, T, T, R, R, T, R, T, i, R, T, R, T, R, T, R, T, Q, Q, R, T, R, T, Q, Q, R, T, Q, Q, R, T);%c%cfprintf(f, s2, Q, s1, Q, R, T, Q, s2, Q, R, T, R, T, R, T, R, T, Q, Q, R, T, R, T, T, R, T, R);%c%cfclose(f);%c%csprintf(com, %cclang -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d ; ./Sully_%%d%c, i, i, i);%c%cif (i >= 0)%c%c%csystem(com);%c%creturn (0);%c}";
	fprintf(f, s1, R, R, R, R, R, B, B, R, B, R, B, R, Q, R, R, T, T, R, R, T, R, T, i, R, T, R, T, R, T, R, T, Q, Q, R, T, R, T, Q, Q, R, T, Q, Q, R, T);
	fprintf(f, s2, Q, s1, Q, R, T, Q, s2, Q, R, T, R, T, R, T, R, T, Q, Q, R, T, R, T, T, R, T, R);
	fclose(f);
	sprintf(com, "clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d ; ./Sully_%d", i, i, i);
	if (i >= 0)
		system(com);
	return (0);
}