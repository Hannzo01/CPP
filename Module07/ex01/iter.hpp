#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter (T* a, const int l, void (*f)(T&))
{
	for (int i = 0 ;i < l; i++ )
	{
		f(a[i]);
	}
}

template <typename T>
void iter (T* a, const int l, void (*f)(const T&))
{
	for (int i = 0 ;i < l; i++ )
	{
		f(a[i]);
	}
}

#endif