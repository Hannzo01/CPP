#include <iostream>


int  main()
{
	long value = 0x41;
	long* pv = &value;

	std::cout << &pv << std::endl;
	std::cout << pv << std::endl;
	std::cout << *pv << std::endl;


	char *ptr = reinterpret_cast<char*>(pv);

	for (int i = 0; i < 8; i++)
	{
		std::cout << ptr[i] << " *" << std::endl;
	}
	std::cout << std::endl;


	long *pv1 = reinterpret_cast<long *>(ptr);
		std::cout << *pv1 << std::endl;

}