#include <iostream>
#include <dune/common/math.hh>

int main(int argc, char **argv)
{
  std::cout << Dune::StandardMathematicalConstants<double>::pi()
            << "\n"
            << Dune::StandardMathematicalConstants<double>::e()
            << "\n"
            << Dune::factorial<int>(3)
            << "\n"
            << Dune::factorial(5)
            << "\n"
            << Dune::power<int, int>(2, 3)
            << "\n"
            << Dune::binomial(100, 1)
            << "\n"
            << Dune::conjugateComplex(std::complex<double>(0, 1))
            << "\n"
            << Dune::sign<double>(24)
            << "\n"
            << Dune::isFinite(std::complex<double>(0, 1))
            << "\n"
            << Dune::isInf(std::complex<double>(0, 1))
            << "\n"
            << Dune::isNaN(std::complex<double>(0, 1))
            << "\n"
            << Dune::isUnordered(10, 20)
            << "\n";

  return 0;
}