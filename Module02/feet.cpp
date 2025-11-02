#include <iostream>

class Distance
{
    int _feet;
    int _inches;
    public :
    Distance(){};
    Distance(int feet, int inches) : _feet(feet), _inches(inches){};
    ~Distance(){};
    int get_feet()const;
    int get_inches() const;
    Distance operator + (Distance d2)const ;
    Distance operator - (Distance d2) const ;
};

int Distance::get_feet()const{
    return _feet;
}

int Distance::get_inches()const{
    return _inches;
}

Distance Distance::operator + (Distance d2) const
{
    int f = _feet + d2._feet;
    int inches = _inches + d2._inches;
    return Distance(f, inches); // here must return the class Distance not a obj like d2
}

Distance Distance::operator-(Distance d2)const{
    int f = _feet - d2._feet;
    int inches = _inches - d2._inches;
    return Distance(f, inches);
}

int main()
{
    Distance d1(1,2);
    Distance d2(2,3);
    Distance d3 = d1 + d2;
    Distance d4 = d3 - d1;

    std::cout << d3.get_feet() << std::endl;
    std::cout << d3.get_inches() << std::endl;

    std::cout << d4.get_feet() << std::endl;
    std::cout << d4.get_inches() << std::endl;

}