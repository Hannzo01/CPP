#include <iostream>

class boo
{
        int _var;   
    public :
        boo();
        boo(int v);
        //copy constructor
        boo(boo &other); 
        //copy assignment operator
        boo& operator=(const boo &other);

        int getval()const ;
        boo& operator+(const boo &other);
        boo& operator-(const boo &other);
        boo operator*(const boo &other);

        void print();
        // boo& operator+=(const boo &other);
        ~boo();
};

int boo::getval()const {
    return _var;
}

void boo::print(){
    std::cout << "the value is : " << _var << std::endl;
}

boo::boo() : _var(0){
    std::cout << "Constructor by def called" << std::endl;
}

// boo boo::operator-(const boo &other){
//     std::cout << "- operator is called\n";
//     return (_var - other.getval());
// }

boo& boo::operator-(const boo &other){
    std::cout << "- operator is called\n";
    _var = _var - other.getval();
    return *this;
}

boo boo::operator*(const boo &other)
{
    std::cout << " * operator is called\n";
    return (other.getval() * _var);    
}


boo::boo(int v) : _var(v){
    std::cout << "Constructor parametrized called" << std::endl;
}

boo::boo(boo &other){
    std::cout << "Copy constructor is called" << std::endl;
    _var = other.getval();
}

boo& boo::operator=(const boo &other){
    std::cout << "Operator copy assignement is called" << std::endl;
    _var = other.getval();
    return *this;
}

// boo& boo::operator+=(const boo &other){
//     boo r = *other + *this;
//     return r;
// }
boo& boo::operator+(const boo &other){

    std::cout << "Plus is called\n";
    _var = _var + other.getval();
    return *this;
}

boo::~boo(){
    std::cout << "Destructor is called" << std::endl;
}

int main()
{
    boo b1(10);
    boo b2(20);
    // boo b3(30);
    // boo b4(40);
    // boo b5(50);
    // boo b6;
    // b6 = b1 + b2 + b3 + b4 + b5;
    // boo b7;
    // b7 = b6 - b1 - b2 - b5;
    boo b8 = b1 + b2;
    b8.print();
}