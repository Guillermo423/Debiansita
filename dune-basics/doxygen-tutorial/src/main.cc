#include "saludo.hh"

int main(int argc, char *argv[])
{
  char *nombre = "Dune";
  if (argc > 1)
    nombre = argv[1];
  saludo(nombre);

  return 0;
}
