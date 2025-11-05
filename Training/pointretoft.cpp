#include <iostream>

class Sample
{
	public :
	int foo;
	Sample();
	~Sample();

	void bar()const;
};

Sample::Sample() : foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}
Sample::~Sample()
{
	std::cout << "destructor called" << std::endl;
	return ;
}
void	Sample::bar()const
{
	std::cout << "member function called\n";
	return ;
}

int main()
{
	//stack 
	Sample instance;

	//heap
	Sample *instance_p = &instance; 
			//initialize the value by the address of the object

	//syntax dun pointeur sur un attribut membre de ma classe Sample

	// la dans cette ligne je ne sais pas de quel object pour utiliser le foo attribut
	int	Sample::*p = &Sample::foo; // <--- la jassigne l'address de ma foo var de class sample
	// pointeur sur un entier qui est membre de la classe sample

	std::cout << instance.foo << std::endl;
	instance.*p = 21;  // <--- loperateur .* va me permettre dassigner la valeur 21 a p
	// la je vais utiliser mon pointur p avec cet object cet instance preciser qui est la instance
	// je vais aasigner 21 au contenu du pointeur p de linstance instance
	std::cout << instance.foo << std::endl;
	instance_p->*p  = 42; 
	std::cout << instance.foo << std::endl;

	void (Sample::*f)() const = &Sample::bar;
	(instance.*f)();
	(instance_p->*f)();

}