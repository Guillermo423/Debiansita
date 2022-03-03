#include <fmt/core.h>
#include <fmt/color.h>
#include <dune/common/densevector.hh>
#include <dune/common/fvector.hh>
#include <iostream>

//using namespace fmt;

int main(int argc, char **argv)
{
  fmt::print(fg(fmt::color::aquamarine) | fmt::emphasis::bold,
             "Clase plantilla: {}.\n", "Dune::FieldVector< K, SIZE >");
  fmt::print(fg(fmt::color::coral) | fmt::emphasis::bold,
             "Espacio vectorial a partir de un producto tensorial de campos ({}).\n", "https://en.wikipedia.org/wiki/Tensor_field");
  const int dim = 10;
  Dune::FieldVector<double, dim> x(4.0);
  fmt::print(fg(fmt::color::yellow_green) | fmt::emphasis::bold,
             "La dimensión de {} es {}.\n", "x", dim);
  fmt::print(fg(fmt::color::pink) | fmt::emphasis::bold,
             "Espacio vectorial campos: {}\n", "h");
  std::cout << x << "\n";

  // Dune::DenseVector<>;
}