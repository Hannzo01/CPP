#include <iostream>
#include <exception>

class boo
{
    public :
    class Myerror : public std::exception 
    {
        public :
        void what()const;
    };
};

int main()
{

}