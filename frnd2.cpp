#include<iostream>
#include<string>
#include<assert.h>
class ComplexNumber
{
	int real;
	int imaginary;
	public:
		ComplexNumber() :
		real(0), imaginary(0)
		{}
		ComplexNumber(int r, int i) :
		real(r), imaginary(i)
		{}
		void print()
		{
			int img = imaginary < 0 ? -imaginary : imaginary;
			std::cout << real << (imaginary < 0 ? " - ": " + ")  << "i" << img  << std::endl;
		}
		ComplexNumber operator-() const;
};
ComplexNumber ComplexNumber::operator-() const
{
	return ComplexNumber(-(this->real), -(this->imaginary) );
}
int main()
{
	ComplexNumber c1(2, -3);
	std::cout<<"c1 = ";
	c1.print();
	ComplexNumber c2 = -c1;
	std::cout<<"c2 = ";
	c2.print();
return 0;
}