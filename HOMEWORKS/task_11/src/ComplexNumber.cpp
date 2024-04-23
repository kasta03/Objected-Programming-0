#include <ComplexNumber.h>

ComplexNumber::ComplexNumber(double XX, double YY): X(XX), Y(YY){}

void ComplexNumber::Print() const
{
    std::cout << "(" <<X<<", "<<Y<<")";
}