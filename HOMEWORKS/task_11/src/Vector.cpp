#include <Vector.h>


Vector* pierwszy = nullptr;
Vector* drugi = nullptr;
 
Vector::Vector()
{
    if (pierwszy != nullptr)
    {
        delete pierwszy;
    }
    if (drugi != nullptr)
    {
        delete drugi;
    } 
    first = ComplexNumber(0.0, 1.1);
    second = ComplexNumber(0.0, 1.1);
    third = ComplexNumber(0.0, 1.1);
}

Vector::Vector(ComplexNumber f, ComplexNumber s, ComplexNumber t): first(f), second(s), third(t)
{
    if (pierwszy != nullptr)
    {
        delete pierwszy;
    }
    if (drugi != nullptr)
    {
        delete drugi;
    } 
}


    Vector& Vector::SetX(double real, double complex)
    {
        first = ComplexNumber(real, complex);
        return *this;
    }
    Vector& Vector::SetY(double real, double complex)
    {
        second = ComplexNumber(real, complex);
        return *this;
    }
    Vector& Vector::SetZ(double real, double complex)
    {
        third = ComplexNumber(real, complex);
        return *this;
    }
void Vector::Print() const
{
    std::cout << "[";
    first.Print();
    std::cout << ", ";
    second.Print();
    std::cout << ", ";
    third.Print();
    std::cout << "]\n";
}

const ComplexNumber& Vector::X() const
{
    return first;
}
ComplexNumber& Vector::X()
{
    return first;
}

const Vector* Vector::CreateConstVector(const ComplexNumber& x, const ComplexNumber& y, const ComplexNumber& z)
{
    Vector * newVector = new Vector(x, y, z);
    
    return newVector;
}

void Vector::Cleanup() {
    if (pierwszy != nullptr) {
        delete pierwszy;
        pierwszy = nullptr;
    }
    if (drugi != nullptr) {
        delete drugi;
        drugi = nullptr;
    }
}

Vector::~Vector() {
    if (pierwszy != nullptr) {
        delete pierwszy;
        pierwszy = nullptr;
    }
    if (drugi != nullptr) {
        delete drugi;
        drugi = nullptr;
    }
}