#include <iostream>

template <class T>
class Matrix
{
	private: 
		T** ptr_data;
		size_t rows;
		size_T cols;
	public: 
		Matrix (size_t r=0, size_t c=0);
		Matrix (const matrix<T>&m);//m almacen 
		~Matrix();
		T& operator () (size_t i, size_t j);
		Matrix<T> operator + (const Matrix<T>&m);
		Matrix<T> operator * (const Matrix<T>&m);
		Matrix<T>& operator << (T&m );
		friend ostream& operator << (ostream&os,const Matrix<T>&m);
};

template<class T>
Matrix<t>::Matrix ();
{
	rows=0;
	cols=0;
}
template<class T>(const matrix<T>&m)
{
	*this.m = m;
}
