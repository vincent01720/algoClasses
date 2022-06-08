#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class ComplexNumber
{
public:

    // default constructor
    ComplexNumber() : m_real(0), m_img(0) {}
    
    // value constructor
    ComplexNumber(float real, float img) : m_real(real), m_img(img) {}
    
    // methods
    const float real() const {return m_real;}
    const float imaginary() const {return m_img;}

    friend ComplexNumber operator+(const ComplexNumber& rhs, const ComplexNumber& lhs);
    friend ComplexNumber operator-(const ComplexNumber& rhs, const ComplexNumber& lhs);
    friend ComplexNumber operator*(const ComplexNumber& rhs, const ComplexNumber& lhs);
    friend ComplexNumber operator/(const ComplexNumber& rhs, const ComplexNumber& lhs);
    friend ComplexNumber operator!(const ComplexNumber& rhs);

    friend ostream &operator<<(ostream &o, const ComplexNumber &r);

private:
    float m_real;
    float m_img;
};


ComplexNumber operator+(const ComplexNumber& rhs, const ComplexNumber& lhs)
{
    float temp_real, temp_img;
    temp_real = rhs.m_real + lhs.m_real;
    temp_img = rhs.m_img + lhs.m_img;
    ComplexNumber newNumber(temp_real,temp_img);
    return newNumber;
}

ComplexNumber operator-(const ComplexNumber& rhs, const ComplexNumber& lhs)
{
    float temp_real, temp_img;
    temp_real = rhs.m_real - lhs.m_real;
    temp_img = rhs.m_img - lhs.m_img;
    ComplexNumber newNumber(temp_real,temp_img);
    return newNumber;
}

ComplexNumber operator*(const ComplexNumber& rhs, const ComplexNumber& lhs)
{
    float temp_real, temp_img;
    temp_real = (rhs.m_real * lhs.m_real) - (rhs.m_img * lhs.m_img);
    temp_img = (rhs.m_real * lhs.m_img) + (rhs.m_img * lhs.m_real);
    ComplexNumber newNumber(temp_real,temp_img);
    return newNumber;
}

ComplexNumber operator/(const ComplexNumber& rhs, const ComplexNumber& lhs)
{
    float temp_xsquared_ysquared, temp_real, temp_img;
    temp_real = (rhs.m_real * lhs.m_real) + (lhs.m_img * rhs.m_img);
    temp_img = (rhs.m_img * lhs.m_real) - (rhs.m_real * lhs.m_img);
    temp_xsquared_ysquared = (lhs.m_real * lhs.m_real) + (lhs.m_img * lhs.m_img);
    ComplexNumber newNumber(temp_real/temp_xsquared_ysquared,temp_img/temp_xsquared_ysquared);
    return newNumber;
}




ostream &operator<<(ostream &o, const ComplexNumber &r) 
{
    return o << r.m_real << " + " << r.m_img << "i";
}


ComplexNumber operator!(const ComplexNumber& rhs)
{
     float temp_real, temp_img;
     
     temp_real = rhs.m_real;
     temp_img = rhs.m_img * -1;
     
     ComplexNumber newComplexNum(temp_real, temp_img);
     
     return newComplexNum;
}



int main()
{

    ComplexNumber c1;
    cout << "Value of c1 (default constructor):\n c1.real() == " << c1.real() << ", c1.imaginary() == " << c1.imaginary() << endl;
    ComplexNumber c2(1,2);
    cout << "Value of c2 (value constructor):\n c2.real() == " << c2.real() << ", c2.imaginary() == " << c2.imaginary() << endl;
    ComplexNumber c3(3,4);

    cout << "c2 + c3 (" << c2 << " + " << c3 << ") == " << (c2+c3) << endl;
    cout << "c2 + c3 (" << c2 << " - " << c3 << ") == " << (c2-c3) << endl;
    cout << "c2 + c3 (" << c2 << " * " << c3 << ") == " << (c2*c3) << endl;
    cout << "c2 + c3 (" << c2 << " / " << c3 << ") == " << (c2/c3) << endl;
    cout << "(c2/c3) + (c2*c3) == " << ((c2/c3)+(c2*c3)) << endl;
    cout << "c2 is currently " << c2 << "; !c2 (complex conjugate of c2) == " << !c2 << endl;


    vector<ComplexNumber> v_complex;
    for (int i = 0; i < 10; i++)
    {
        v_complex.push_back(ComplexNumber(i, 2*i));
    }

    cout << "Vector output using indexed for-loop:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << v_complex[i] << endl;
    }

    cout << "Vector output using an iterator in for-loop:" << endl;
    for (auto it = v_complex.begin(); it != v_complex.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}