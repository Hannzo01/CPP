#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

    int _fixed_point;
    const static int _fract_bits;
    public :
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed& other);
    // +
    Fixed operator+(const Fixed& other);
    // - 
    Fixed operator-(const Fixed& other);

    // * 
    Fixed operator*(const Fixed& other);
 
    // /
    Fixed operator/(const Fixed& other);


};


Fixed Fixed::operator+(const Fixed& other)
{
    return Fixed(_fixed_point + other._fixed_point);
}

#endif