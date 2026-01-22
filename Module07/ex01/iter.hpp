#ifndef ITER_HPP
#define ITER_HPP

template <typename Add, typename len, typename ft>

void iter (Add a, const len l, void (*f)(Add&))
{
	for (int i = 0 ;i < l; i++ )
	{
		f(a[i]);
	}
}


#endif