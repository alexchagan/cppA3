 
#include <complex>
using namespace std;

namespace solver{

    class RealVariable;
    class ComplexVariable;
    double solve(RealVariable);
    complex<double> solve(ComplexVariable);
    
    class RealVariable{
        double _re;

    public:
        
        RealVariable(); //default constructor
         //essential operators
        friend RealVariable operator -(const RealVariable&, const RealVariable&);
        friend RealVariable operator -(const RealVariable&, const int);
        friend RealVariable operator +(const RealVariable&, const RealVariable&);
        friend RealVariable operator +(const RealVariable&, const int);
        friend RealVariable operator +(const int, const RealVariable&);
        friend RealVariable operator *(const int, const RealVariable&);
        friend RealVariable operator /(const RealVariable&, const int);
        friend RealVariable operator ^(const RealVariable&, const int);
        friend RealVariable operator ==(const RealVariable&, const int);
        friend RealVariable operator ==(const RealVariable&, const RealVariable&);
        //non-essential
        friend RealVariable operator -(const int, const RealVariable&);
        friend RealVariable operator *(const RealVariable&, const int);
        friend RealVariable operator *(const RealVariable&, const RealVariable&);
        friend RealVariable operator /(const int, const RealVariable&);
        friend RealVariable operator /(const RealVariable&, const RealVariable&);
        friend RealVariable operator ==(const int, const RealVariable&);
        
        double solve(RealVariable);
        
    };

    class ComplexVariable {
        double _im;
        double _re;

    public:
         
        ComplexVariable(); //default constructor
        //essential operators
        friend ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&);
        friend ComplexVariable operator -(const ComplexVariable&, const int);
        friend ComplexVariable operator +(const int, const ComplexVariable&);
        friend ComplexVariable operator +(const ComplexVariable&, complex<double>);
        friend ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&);
        friend ComplexVariable operator +(const ComplexVariable&, const int);
        friend ComplexVariable operator *(const int,const ComplexVariable&);
        friend ComplexVariable operator /( const ComplexVariable&, const int);
        friend ComplexVariable operator^(const ComplexVariable&, const int);
        friend ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&);
        friend ComplexVariable operator ==(const ComplexVariable&, const int);
        //non-essential
        friend ComplexVariable operator -(const int, const ComplexVariable&);
        friend ComplexVariable operator *(const ComplexVariable&, const int);
        friend ComplexVariable operator *(const ComplexVariable&, const ComplexVariable&);
        friend ComplexVariable operator /(const int, const ComplexVariable&);
        friend ComplexVariable operator /(const ComplexVariable&, const ComplexVariable&);
        friend ComplexVariable operator ==(const int, const ComplexVariable&);
        
        complex<double> solve(ComplexVariable);
    };
}

