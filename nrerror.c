#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <vicNl.h>

void nrerror(char error_text[])
/* Numerical Recipes standard error handler */
{
	void _exit();

	fprintf(stderr,"Model run-time error...\n");
	fprintf(stderr,"%s\n",error_text);
	fprintf(stderr,"...now exiting to system...\n");
	_exit(1);
}