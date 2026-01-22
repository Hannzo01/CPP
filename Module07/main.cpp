#include <iostream>
#include <exception>

class boo : public std::exception
{
    public :
        const char* what() const throw()
        {
            return "dddddddddddddddddd";
        }
};

int main()
{
    boo b1;
    try 
    {
        int a = 2;
        if (a == 2)
        {   
            throw b1;
            // instr
            // throw excep (type) int
        }
    }
    // catch (// same type)
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (...)
    {

    }
}
// f1 ( int x f2 (){ char c f3 (){ a / b b == 0 --> throw() }} )