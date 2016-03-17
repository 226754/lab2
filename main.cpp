#include <stdio.h>
#include <assert.h>
#include <time.h>

//int gcd (int a, int b);

struct fraction
{
	int nominator, int denominator;
	bool is_correct()
		{
			return (denominator!=0 && nominator<denominator)?true:false

		};

int main(int argc, char **argv)
{
	if(argc<1)
		return 0;
	int n=atoi(argv[1]);
	fraction *fractions=new f_fraction(n);
	srand(time(NULL));

	/*
	for (int i = 0; i < n; assert(fractions[i++].is_correct()))
		printf("[%i] %2i / %2i\n", 
			i, 
			fractions[i].nominator, 
			fractions[i].denominator);
	*/
}

fraction *f_fraction(int n)
{
	fraction *fractions = new fraction[n];
	for(int i=0; i<n; ++i)
	{
		fractions[i].nominator=rand()%19-9;
		fractions[i].denominator=rand()%19-9;
	}
	return fractions;
}


	

	