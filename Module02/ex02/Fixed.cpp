/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 09:21:33 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/16 10:42:34 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;


Fixed::Fixed() : _fixed_point(0){
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
    _fixed_point = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
    _fixed_point = other.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    _fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
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
    obj._fixed_point = roundf(this->toFloat() * other.toFloat() * (1 << _fract_bits));
    return obj;
}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed obj;
    obj._fixed_point = roundf(this->toFloat() / other.toFloat() * (1 << _fract_bits));
    return obj;
}

int Fixed::toInt( void ) const
{
    int x;
    x = _fixed_point / 256;
    return x;

}

float Fixed::toFloat( void ) const
{
    float f = float(_fixed_point) / (float)256;
    return (f);
}

Fixed::~Fixed(){}

std::ostream& operator<<(std::ostream& os, const Fixed& a)
{
    os << a.toFloat();
    return os;
}