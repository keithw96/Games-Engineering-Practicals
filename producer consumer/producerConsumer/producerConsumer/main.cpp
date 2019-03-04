#include <thread>
#include <iostream>
int buf; int p = 0; int c = 0;

void producer()
{
	static int a[3] = { 2,3,1 };

	while (p < 3)
	{
		buf = a[p];

		p = p + 1;

		std::cout << buf << std::endl;
	}

}

void consumer()
{
	static int b[3] = { 0,0,0 };

	while (c < 3)
	{
		b[c] = buf;

		c = c + 1;

		std::cout << b[c] << std::endl;
	}
}

int main()
{
	std::thread t1(producer);
	std::thread t2(consumer);
	t1.join();
	t2.join();
	
	system("pause");
}