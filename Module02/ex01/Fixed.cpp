/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:47:32 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/08 22:21:38 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;


Fixed::Fixed() : _fixed_point(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed_point = other.getRawBits();
    // *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixed_point = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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

Fixed::Fixed(const int x)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed_point = x << _fract_bits;
}

Fixed::Fixed(const float y)
{
    std::cout << "Float constructor called" << std::endl;   
    _fixed_point = roundf(y * 256);
}

int Fixed::toInt( void ) const
{
    int x;
    x = _fixed_point / 256;
    // x = _fixed_point >> _fract_bits;
    return x;

}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(_fixed_point) / static_cast<float>(256));
}

std::ostream& operator<<(std::ostream& os, const Fixed& a)
{
    os << a.toFloat();
    return os;
}
