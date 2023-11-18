#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int guess;
	int random_num;
	srand((unsigned)time(NULL));
	random_num=rand()%100+1;
	printf("从1到100,猜猜我想要哪个数字");
	cin>>guess;
	while (guess!=random_num)
	{
		if (guess < random_num)
		{	
			printf("猜小了");
            cin>>guess;
		}
		if (guess > random_num)
		{	
			printf("猜大了");
            cin>>guess;
		}
    }
	if (guess == random_num)
		{
			printf("竟然猜对了，百年一遇啊");
		}	
	
    return 0;
}
