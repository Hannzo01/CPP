#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    int _fixed_point;
    const static int _fract_bits;
    public :
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed();
    Fixed(int fixed_point);
    Fixed(float fixed_point);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed& other);

    //-----ARITHMETIC OP-----BINARE----//
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);

    //---ARITHMETIC OP--unary op-------//
    Fixed operator++(int); //a++   copie pour stocker lancienne valeur
    Fixed& operator++(); // ++a
    Fixed operator--(int); //a++   copie pour stocker lancienne valeur
    Fixed& operator--(); // ++a

    //------comparison operators--OR--//
    //------relational operators-----//

    bool    operator >(const Fixed& other) const;
    bool    operator <(const Fixed& other) const;
    bool    operator >=(const Fixed& other) const;
    bool    operator <=(const Fixed& other) const;
    bool    operator ==(const Fixed& other) const;
    bool    operator !=(const Fixed& other) const;

    static const Fixed& min(const Fixed &a, const Fixed&b);
    static Fixed& min(Fixed &a, Fixed&b);

    static const Fixed& max(const Fixed &a, const Fixed&b);
    static Fixed& max(Fixed &a, Fixed&b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& a);


#endif