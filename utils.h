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

void wypisz(int tab[])
{
	for(int i=0;i<10;i++)
	{
		std::cout<<tab[i]<<std::endl;
	}
}

int suma(int tab[])
{
	int res = 0;
	for(int i=0;i<10;i++)
	{
		res += tab[i];
	}
	return res;
}

int min(int array)
{
     int length = array.size( );  // establish size of array
     int min = array[0];       // start with min = first element

     for(int i = 1; i<length; i++)
     {
          if(array[i] < min)
                min = array[i];
     }
     return min;                // return min value in array
}

int max(int array)
{
     int length = array.size( );  // establish size of array
     int max = array[0];       // start with max = first element

     for(int i = 1; i<length; i++)
     {
          if(array[i] > max)
                max = array[i];
     }
     return max;                // return max value in array
}
