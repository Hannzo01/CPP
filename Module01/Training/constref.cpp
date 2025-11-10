#include <iostream>

class boo
{
    std::string _name;


    public :
    boo(){};
    ~boo(){};
    void set_name(std::string name);
    std::string& get_name() const;
    void print()const 
    {
        std::cout << _name << std::endl;
    }
};


int main()
{
    boo b1;
    b1.set_name("kenza");
    b1.get_name();

}