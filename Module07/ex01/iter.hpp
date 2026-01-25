#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename ft>
void iter (T* a, const int l, ft f)
{
	for (int i = 0 ;i < l; i++ )
	{
		f(a[i]);
	}
}

#endif