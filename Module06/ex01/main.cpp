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
<<<<<<< HEAD
		std::cout << "Success! Addresses match." << original << " == " << recovered << std::endl;
		
	}

=======
		std::cout << "Success! Addresses match." << original << " == " << recovered << std::endl;	
	}
>>>>>>> 203c00f3d20d3f960ceffb79d4c2912a65d7ae32
}