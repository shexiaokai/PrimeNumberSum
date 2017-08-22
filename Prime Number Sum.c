# include <stdio.h>

int main()
{
	int i, j, n, m, star, sum = 0, cnt = 0;
	scanf( "%d %d", &n, &m );
	if( n )
		cnt++;
	if( n == 1 )
		sum += 2;
	for( i = 3; cnt < m; i += 2 )
	{
		for( j = 3; j < i; j++)
		{
			if( i % j == 0 )
				break;
		}
		if( j == i )
		{
			cnt++;
			if( cnt >= n )
				sum += i;
		}
	}
	printf( "%d\n", sum );
	system("pause");
}
