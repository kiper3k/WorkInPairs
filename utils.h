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
