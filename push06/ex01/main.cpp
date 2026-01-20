#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data myData;
    myData.i = 42;
    myData.c = 'A';
    myData.b = true;

	Data* original = &myData;
	uintptr_t raw = Serializer::serialize(original);
	Data* recovered = Serializer::deserialize(raw);
	
	if (original == recovered)
	{
		std::cout << "Success! Addresses match." << original << " == " << recovered << std::endl;	
	}
}