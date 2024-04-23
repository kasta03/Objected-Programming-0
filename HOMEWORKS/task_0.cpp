// #include <iostream>

// using namespace std;

// struct Vector
// {
// public:
//     double x;
//     double y;

//     Vector(double x = 0.5, double y = 5.0)
//     {
//         this->x = x;
//         this->y = y;
//     }

//     Vector dodawanie(Vector &other)
//     {
//         return Vector(x + other.x, y + other.y);
//     }

//     void print() const
//     {
//         cout << x << " " << y << endl;
//     }

//     Vector operator + (Vector& other) {return dodawanie(other); }
// };

// int main()
// {
//     Vector Vector1(1, 2);
//     Vector Vector2;

//     Vector Vector3 = Vector1 + Vector2;
//     Vector3.print();

//     return 0;
// }

#include <iostream>
#include <vector>
#include <cmath>

class Vector {
private:
    std::vector<double> vecData;

public:
    // Konstruktor przyjmujący int lub double
    Vector(int size) : vecData(size, 0.0) {}

    Vector(double value) : vecData(1, value) {}

    // Metoda umożliwiająca dostęp do elementów wektora
    double& vec(int index) { return vecData[index]; }

    // Metoda sumująca dwa wektory
    static Vector sum(const Vector& v1, const Vector& v2) {
        int size = std::max(v1.vecData.size(), v2.vecData.size());
        Vector result(size);
        for (int i = 0; i < size; ++i) {
            result.vecData[i] = (i < v1.vecData.size() ? v1.vecData[i] : 0.0) +
                                (i < v2.vecData.size() ? v2.vecData[i] : 0.0);
        }
        return result;
    }

    // Metoda obliczająca iloczyn skalarny dwóch wektorów
    static double dot(const Vector& v1, const Vector& v2) {
        double result = 0.0;
        int size = std::min(v1.vecData.size(), v2.vecData.size());
        for (int i = 0; i < size; ++i) {
            result += v1.vecData[i] * v2.vecData[i];
        }
        return result;
    }

    // Metoda obliczająca normę wektora
    double norm() const {
        double sum = 0.0;
        for (double element : vecData) {
            sum += element * element;
        }
        return std::sqrt(sum);
    }

    // Metoda powiększająca wektor do nowego rozmiaru z uzupełnieniem zerami
    Vector extended(int size) const {
        Vector result(size);
        for (int i = 0; i < vecData.size(); ++i) {
            result.vecData[i] = vecData[i];
        }
        return result;
    }

    // Operator konwersji na double zwracający normę wektora
    operator double() const {
        return norm();
    }

    // Metoda wypisująca zawartość wektora
    void print(const std::string& label = "") const {
        std::cout << label << "[";
        for (int i = 0; i < vecData.size(); ++i) {
            std::cout << vecData[i];
            if (i != vecData.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
	Vector v1(3),v0(3.);		
	const Vector v2(4);	

	v1.vec(0) = 4;
	v1.vec(1) = 1;
	const Vector v3 = v1;
	v1.vec(1) = 2;

	v1.print("v1 = ");
	v2.print("v2 = ");
	v3.print("v3 = ");
  v0.extended(4).print("v0 = ");
  v0.print("v0 = ");

	double prod = Vector::dot(v1, v3); 
	std::cout << "Iloczyn skalarny v1 i V2: " << prod << std::endl;    
  
	double norm = static_cast<double>(v3); // == v3.norm();
	std::cout << "Norma wektora |v3| = " << norm << ", " << v3.norm() << std::endl;
	
	Vector v4 = Vector::sum(v1, v3); 
	v4.print("v1 + v3 = ");

	Vector v5 = std::move(Vector::sum(v1.extended(4), v2));
	v5.print("v1 + v2 = ");

	Vector::sum(v1, static_cast<Vector>(3.)).print("v1 + [3] = ");

  Vector v6 = Vector::sum(static_cast<Vector>(3.5), v3);
	v6.print("[3.5] + v3 = ");
  std::cout << std::endl;
	
#ifdef ERROR // make error - mają być dwa błędy
	Vector s= Vector::sum(v1,3.5);
	Vector z= 5;
#endif
}