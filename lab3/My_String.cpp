#include <iostream>

using namespace std;

class my_string
{
	private:
		char a;
		int tamano;
		
		
	public:
		my_string(const char * str=NULL);
		my_string(const my_string & str);//copia
		~my_string();
		my_string & operator = (const my_string & str);
		my_string & operator + (const my_string & str);
		bool operador == 
		
		char & operator [](const int & i)
		{
			operator << // -
			
		}
	
	//crear archivos my_string.h my_String.cpp
	//              test_my_string.cpp
	
	
	
	
	my_string::my_string(const char*str=NULL)
	{
		str ='\0';
	}
	my_string::my_String(const my_string &str)
	{
		a=str.a;
	}
	
	
	
	
}
