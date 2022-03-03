// -*- tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
// vi: set et ts=4 sw=2 sts=2:

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif
#include <iostream>
#include <dune/common/parallel/mpihelper.hh> // An initializer of MPI
#include <dune/common/exceptions.hh> // We use exceptions
#include <dune/common/fvector.hh>
int main(int argc, char** argv)
{
  
  const int dim = 50;
  Dune::FieldVector<double,dim> Vector1;
  for(auto & l:Vector1){std::cout<<l<<std::endl;}
}
