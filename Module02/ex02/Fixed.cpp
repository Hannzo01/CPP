#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;


Fixed::Fixed() : _fixed_point(0){
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed_point)
{
    _fixed_point = fixed_point * 256;
}

Fixed::Fixed(float fixed_point)
{
    _fixed_point = roundf(fixed_point * 256);
}
    
Fixed::Fixed(const Fixed& other)
{
    // std::cout << "Copy constructor called" << std::endl;
    _fixed_point = other.getRawBits();
    // *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    _fixed_point = other.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    _fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed&b)
{
    if (a > b)
        return b;
    return a;
}

Fixed& Fixed::min(Fixed &a, Fixed& b)
{
    if (a > b)
        return b;
    return a;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed&b)
{
    if (a < b)
        return b;
    return a;
}

Fixed& Fixed::max(Fixed &a, Fixed& b)
{
    if (a < b)
        return b;
    return a;
}

bool    Fixed::operator >(const Fixed& other) const
{
    if (_fixed_point > other._fixed_point)
        return true;
    return false;
}

bool    Fixed::operator <(const Fixed& other) const
{
    if (_fixed_point < other._fixed_point)
        return true;
    return false;
}

bool    Fixed::operator >=(const Fixed& other) const
{
    if (_fixed_point >= other._fixed_point)
        return true;
    return false;
}

bool    Fixed::operator <=(const Fixed& other) const
{
    if (_fixed_point <= other._fixed_point)
        return true;
    return false;
}

bool    Fixed::operator ==(const Fixed& other) const
{
    if (_fixed_point == other._fixed_point)
        return true;
    return false;
}

bool    Fixed::operator !=(const Fixed& other) const
{
    if (_fixed_point != other._fixed_point)
        return true;
    return false;
}

// Fixed::Fixed(int fixed_point) : _fixed_point(fixed_point){}


Fixed Fixed::operator+(const Fixed& other)
{
    Fixed obj;
    obj._fixed_point = _fixed_point + other._fixed_point;
    // return Fixed(_fixed_point + other._fixed_point);
    return obj;
}

Fixed Fixed::operator++(int) //a++
{
    Fixed old_val = *this; //copie de *this
    (this->_fixed_point)++; //icremenet the var
    return old_val; //return the original val
}

Fixed& Fixed::operator++() //++a
{    
    (this->_fixed_point)++;
    return *this;
}

Fixed Fixed::operator--(int) //a++
{
    Fixed old_val = *this; //copie de *this
    (this->_fixed_point)--; //icremenet the var
    return old_val; //return the original val
}

Fixed& Fixed::operator--() //++a
{    
    (this->_fixed_point)--;
    return *this;
}

Fixed Fixed::operator-(const Fixed& other)
{
    Fixed obj;
    obj._fixed_point  =_fixed_point - other._fixed_point;
    return obj;
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed obj;
    obj._fixed_point  =_fixed_point * other._fixed_point;
    return obj;}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed obj;
    obj._fixed_point  =_fixed_point / other._fixed_point;
    return obj;}

int Fixed::toInt( void ) const
{
    int x;
    x = _fixed_point / 256;
    // x = _fixed_point >> _fract_bits;
    return x;

}

float Fixed::toFloat( void ) const
{
    float f = float(_fixed_point) / (float)256;
    return (f);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& a)
{
    os << a.toFloat();
    return os;
}