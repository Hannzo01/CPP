#include <iostream>

class Boo
{
	private:
		int* _tab;
		int    _taille;
	public:
	Boo(){
		std::cout << "default constructor is called\n";
		_tab = NULL;
		_taille = 0;
	}
	Boo(int *tab, int taille)
	{
		std::cout << "A parameterized constructor\n";
		_taille = taille;
		_tab = new int[_taille];
		for (int i = 0 ; i < _taille; i++)
		{
			_tab[i] = tab[i];
		}
	}
	void	print_tab()const
	{
		for (int i = 0; i < _taille ; i++)
		{
			std::cout << _tab[i] << " " ;
		}
		std::cout << std::endl;
	}
	//copy constructor
	Boo(const Boo& other);
	// copy assignement constructor
	Boo& operator=(const Boo& other);
	//destrucor
	~Boo()
	{
		std::cout << "destructor is called\n";
		if (_tab != NULL)
			delete [] _tab;
	}
};
Boo& Boo::operator=(const Boo& other)
{
	if (this == &other) // handle a = a;
		return *this;
	if (_tab != NULL)
		delete [] _tab;
	_tab = new int[other._taille];
	_taille = other._taille;
	for (int i = 0; i < other._taille ; i++)
	{
		_tab[i] = other._tab[i];
	}
	return *this; // pointeur vers lobject courant
}

Boo::Boo(const Boo& other)
{
	_taille = other._taille;
	_tab = new int[_taille];
	for (int i = 0; i < _taille ; i++)
	{
		_tab[i] = other._tab[i];
	}
}

int main()
{
	int tab[5] = {1,2,3,4,5};
	Boo b1(tab, 5);
	b1.print_tab();

	Boo b2 = b1;
	b2.print_tab();
	Boo b3;
	b3 = b2;
	b3.print_tab();
	b3 = b3;
	b3.print_tab();

}