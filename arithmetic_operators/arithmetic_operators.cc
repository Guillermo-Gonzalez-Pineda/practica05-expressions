/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file arithmetic_operators.cc
  *@date 31/10/2022
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  */

#include <iostream>

int main() {

  std::cout << "\nEste programa ejectuta todas las operaciones posibles con dos "
            "numeros insertados por el usuario.\n" << std::endl;
  
  int numero1, numero2;
  
  std::cout << "Inserte dos numeros: " << std::endl;
  std::cin >> numero1 >> numero2;

  std::cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << std::endl;
  std::cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << std::endl;
  std::cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << std::endl;
  std::cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << std::endl;
  std::cout << numero1 << " % " << numero2 << " = " << numero1 % numero2 << std::endl;
  std::cout << numero1 << " > " << numero2 << " = " << (numero1 > numero2) << std::endl;
  std::cout << numero1 << " < " << numero2 << " = " << (numero1 < numero2) << std::endl;
  std::cout << numero1 << " >= " << numero2 << " = " << (numero1 >= numero2) << std::endl;
  std::cout << numero1 << " <= " << numero2 << " = " << (numero1 <= numero2) << std::endl;
  std::cout << numero1 << " == " << numero2 << " = " << (numero1 == numero2) << std::endl;
 
return 0;
 
}
