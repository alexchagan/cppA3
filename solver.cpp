#include "solver.hpp"
#include <complex>
#include <iostream>
using namespace solver;


  RealVariable::RealVariable()
  {
       _re = 0.0;
  }
   
   ComplexVariable::ComplexVariable()
   {
       _re = 0.0;
       _im = 0.0;
   }
   
   //essential operators
    RealVariable operator -(const RealVariable&, const RealVariable&){return RealVariable();}
    RealVariable operator -(const RealVariable&, const int){return RealVariable();}
    RealVariable operator +(const RealVariable&, const RealVariable&){return RealVariable();}
    RealVariable operator +(const RealVariable&, const int){return RealVariable();}
    RealVariable operator +(const int, const RealVariable&){return RealVariable();}
    RealVariable operator *(const int, const RealVariable&) {return RealVariable();}
    RealVariable operator /(const RealVariable& ,const int){return RealVariable();}
    RealVariable operator ^(const RealVariable&, const int){return RealVariable();}
    RealVariable operator ==(const RealVariable&, const int){return RealVariable();}
    RealVariable operator ==(const RealVariable&, const RealVariable&){return RealVariable();}
   //non-essential operators
      RealVariable operator -(const int, const RealVariable&){return RealVariable();}
      RealVariable operator *(const RealVariable&, const int){return RealVariable();}
      RealVariable operator *(const RealVariable&, const RealVariable&){return RealVariable();}
      RealVariable operator /(const int, const RealVariable&){return RealVariable();}
      RealVariable operator /(const RealVariable&, const RealVariable&){return RealVariable();}
      RealVariable operator ==(const int, const RealVariable&){return RealVariable();}
    
    double solve(RealVariable) {return 0.0;}

   //essential operators
    ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator -(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator +(const int, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator +(const ComplexVariable&, complex<double>){return ComplexVariable();}
    ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator +(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator*(const int, const ComplexVariable&) {return ComplexVariable();}
    ComplexVariable operator /(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator^(const ComplexVariable&, const int) {return ComplexVariable();}
    ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator ==(const ComplexVariable&, const int){return ComplexVariable();}
   //non-essential operators
    ComplexVariable operator -(const int, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator *(const ComplexVariable&, const int){return ComplexVariable();}
    ComplexVariable operator *(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator /(const int, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator /(const ComplexVariable&, const ComplexVariable&){return ComplexVariable();}
    ComplexVariable operator ==(const int, const ComplexVariable&){return ComplexVariable();}
   
    complex<double> solve(ComplexVariable) {return complex<double>();}
