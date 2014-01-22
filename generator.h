#include <time.h>

int generator()
{
	int t[10];
	srand ( time(NULL) );

	for(int i=0;i<10;i++)
	{
		t[i]=rand() % 101;
	}
	return t
}
