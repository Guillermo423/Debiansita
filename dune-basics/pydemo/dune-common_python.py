#!/usr/bin/python
# -*- coding: utf-8 -*-

from dune.common import FieldVector

def myvector(array):
  return f"{FieldVector(array)}"

if __name__ == "__main__":
  print(myvector([0, 0]))