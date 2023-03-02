#include<stdio.h>

int ones(int n)
{
    int count = 0;
	int countFlag = 0;
	int max = 0;
	for( ; n > 0; n >>= 1 )
	{
		if( n % 2 ==0 )
		{
			count = 0;
			countFlag = 1;
		}
		else if ( countFlag )
			{
			    count++;
			    if( count > max )
                    max = count;
			}
	}
	return max;
}

int main()
{
    printf("%d\n",ones(14));
    printf("%d\n",ones(110));

}
