// Tomado de https://stackoverflow.com/a/66161001

#include <sys/utsname.h>
#include <iostream>

// un pequeño ayudante para mostrar el contenido de una estructura utsname:
std::ostream &operator<<(std::ostream &os, const utsname &u)
{
  return os << "sysname : " << u.sysname << '\n'
            << "nodename: " << u.nodename << '\n'
            << "release : " << u.release << '\n'
            << "version : " << u.version << '\n'
            << "machine : " << u.machine << '\n';
}

int main()
{
  utsname result; // declarar la variable para contener el resultado

  uname(&result); // llamar a la función uname() para completar la estructura

  std::cout << result; // mostrar el resultado usando la función ayudante
}
