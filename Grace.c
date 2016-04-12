#include <stdio.h>

#define R '\n'
#define T '\t'
#define FT(x)int main(){FILE *f; f = fopen("Grace_kid.c", "w"); fprintf(f, x, R, R, R, R, R, R, R, T, R, R, R, #x); fclose(f);}

/*
	comment
*/

FT("#include <stdio.h>%c%c#define R '\\n'%c#define T '\\t'%c#define FT(x)int main(){FILE *f; f = fopen(\"Grace_kid.c\", \"w\"); fprintf(f, x, R, R, R, R, R, R, R, T, R, R, R, #x); fclose(f);}%c%c/*%c%ccomment%c*/%c%cFT(%s)")