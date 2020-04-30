#include "solver.hpp"
#include <iostream>
#include <complex>

namespace solver{

RealVariable::RealVariable()
{
    _re = 0.0;
}

ComplexVariable::ComplexVariable()
{
    _re = 0.0;
    _im = 0.0;
}

    RealVariable operator +(const RealVariable&, const int){return RealVariable();}
    RealVariable operator +(const RealVariable&, const RealVariable&){return RealVariable();}
    RealVariable operator +(const int, const RealVariable&){return RealVariable();}
    RealVariable operator -(const RealVariable&, const RealVariable&){return RealVariable();}
    RealVariable operator -(const RealVariable&, const int){return RealVariable();}
    RealVariable operator *(const RealVariable&, const int){return RealVariable();}
    RealVariable operator /(const RealVariable&, const int){return RealVariable();}
    RealVariable operator ^(const RealVariable&, const int){return RealVariable();}
    RealVariable operator ==(const RealVariable&, const RealVariable&){return RealVariable();}
    RealVariable operator ==(const RealVariable&, const int){return RealVariable();}
    
    double solve(RealVariable){return 0.0;}
    
    ComplexVariable operator +(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator +(const int, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator +(const ComplexVariable&, complex<double>){return ComplexVariable();}
    ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator -(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator *(const int, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator /(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator ^(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator ==(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    
    complex<double> solve(ComplexVariable){return complex<double>();}
}
   