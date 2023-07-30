/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file parentheses.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief Given a sequence made up of only ‘(’ and ‘)’, 
    tell if the parentheses close correctly.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>
#include <stack>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "Given a sequence made up of only ‘(’ and ‘)’, "
    << "tell if the parentheses close correctly.";
}

// Comprueba si los parentesis selecionados son '(' y ')'  (si son correctos)
bool ArePair(char opening,char closing) {
  if(opening == '(' && closing == ')') {
    return true; // Si son '(' ')' devuelve true
  }
  return false; // Si no son '(' ')'  devuelve falso
}

// Va selecionando parentesis y va comprobando si son correctos
bool AreParanthesesBalanced(std::string expression) {
  std::stack<char>  parentheses; // Se meterá y eliminará las combinaciones de parentesis
  for(int i = 0; i < static_cast<int>(expression.length()); i++) {
	if(expression[i] == '(') {
      parentheses.push(expression[i]); // Lo añade al stack
	} else {
	  if(expression[i] == ')') {
		if(parentheses.empty() || !ArePair(parentheses.top(),expression[i])) {
		  return false; // Devuelve falso si ve que el stack esta vacio en vez de '(' (del if anterior)
		  				// o si ve que son diferente como ')' y '('
		}else {
		  parentheses.pop(); // Si son correcto los elimina y sigue con el siguiente par
		}		 
	  }
	}
  }
  return parentheses.empty() ? true:false; // Devuelve true si vacio, falso si tiene '('
}

int main() {
  // Mensaje();
  std::string expression;
  std::cin >> expression;
  if(AreParanthesesBalanced(expression)) {
    std::cout << "yes\n"; // En caso que la funcion sea verdadero
  } else {
    std::cout << "no\n"; // En caso que la funcion sea falso
  }
		
}