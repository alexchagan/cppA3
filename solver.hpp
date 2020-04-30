#include <complex>
using namespace std;

namespace solver{

 class RealVariable
{
    double _re;
    
    public:
    RealVariable();
    friend RealVariable operator +(const RealVariable&, const int);
    friend RealVariable operator +(const RealVariable&, const RealVariable&);
    friend RealVariable operator +(const int, const RealVariable&);
    friend RealVariable operator -(const RealVariable&, const RealVariable&);
    friend RealVariable operator -(const RealVariable&, const int );
    friend RealVariable operator *(const RealVariable&, const int);
    friend RealVariable operator /(const RealVariable&, const int);
    friend RealVariable operator ^(const RealVariable&, const int);
    friend RealVariable operator ==(const RealVariable&, const RealVariable&);
    friend RealVariable operator ==(const RealVariable&, const int);
    
    double solve(RealVariable);
};

class ComplexVariable
{
    double _re;
    double _im;
    
    public:
    
    ComplexVariable();
    friend ComplexVariable operator +(const ComplexVariable&, const int);
    friend ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator +(const int, const ComplexVariable&);
    friend ComplexVariable operator +(const ComplexVariable&, complex<double>);
    friend ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&);
    friend ComplexVariable operator -(const ComplexVariable&, const int);
    friend ComplexVariable operator *(const int, const ComplexVariable&);
    friend ComplexVariable operator /(const ComplexVariable&, const int);
    friend ComplexVariable operator ^(const ComplexVariable&, const int);
    friend ComplexVariable operator ==(const ComplexVariable&, const int);
    friend ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&);
    
    complex<double> solve(ComplexVariable);
 };
}
