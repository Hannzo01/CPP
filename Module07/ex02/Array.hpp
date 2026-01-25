#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <exception>
template <typename T>

class Array
{
	private:
		T* _arr;
		unsigned int _n;
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		const T& operator[](unsigned int index)const;
		T& operator[](unsigned int index);

		unsigned int size()const;
};

template <typename T>
Array<T>::~Array(){
	delete[] _arr;
}

template <typename T>
T& Array<T>::operator[](unsigned int index){
	if (index >= _n)
		throw std::exception();
	return _arr[index];
}


template <typename T>
const T& Array<T>::operator[](unsigned int index)const {
	if (index >= _n)
		throw std::exception();
	return _arr[index];
}

template <typename T>
unsigned int Array<T>::size()const{
	return _n;
}

template <typename T>

Array<T>::Array(const Array& other)
{
	_n = other._n;
	_arr = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
	{
		_arr[i] = other._arr[i];
	}
}
template <typename T>

Array<T>& Array<T>::operator=(const Array& other){
	if (this != &other)
	{
		delete[] _arr;
		_n = other._n;
		_arr = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
		{
			_arr[i] = other._arr[i];
		}
	}
	return *this;
}


template <typename T>

Array<T>::Array() : _n(0){
	_arr = new T[_n]();
}

template <typename T>

Array<T>::Array(unsigned int n) : _n(n){
	_arr = new T[_n]();
}

#endif