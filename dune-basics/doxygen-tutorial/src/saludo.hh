#ifndef SALUDO

#include <iostream>
#include <string>

/**
 * @brief Funciona que te saluda
 * 
 * @param nombre 
 */

void saludo(std::string nombre)
{
  std::cout << "¡Hola "
            << nombre
            << "!\n"
               "Bienvenido al tutorial de Doxygen"
            << "\n";
}

#endif // SALUDO