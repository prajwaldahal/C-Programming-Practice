void middle(float a,float b,float c)
{
	if(a>b && a>c)
	{
		if(b>c)
		{
			mid=b;	
		}
		else
		{
			mid=c;
		}
	}
	else if(b>a && b>c)
	{
		if(a>c)
		{
			mid=a;
		}
		else
		{
			mid=c;
		}
	}
	else
	{
		if( a>b)
		{
			mid=a;
		}
		else
		{
			mid=b;
		}
	}
}
