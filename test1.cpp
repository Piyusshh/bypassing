#include <stdio.h>
#include <stdlib.h>

int d;
int main(){
	int *p,*q,*r,*s;
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	
	p = &a;
	q = &b;

	r = p;

	if(1)
	{
		r = &b;
		printf("%d\n",r);
	}
	else
	{
		s = q;
	}

	s = &a;
	return 0;
}

/* un-initialized variable : b */

