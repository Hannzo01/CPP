#include <iostream>

int main()
{
	int **p = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		p[i] = new int[2];
		for (int j = 0; j < 2; j++)
		{
			p[i][j] = j;
			std::cout << p[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		delete[] p[i];
	}
	delete[] p;
}