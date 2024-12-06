include <iostream>
#include "ListaPuntatori.h"
template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista;
public:
  void push(T elem) {
   inslista(elem, 1);
    }
  T pop() {
   if (isEmpty()) {
    std::cout << "Errore: pila vuota." << std::endl;
  return T(); 
  }
   T elem = leggilista(1); //legge l'elemento in testa alla lista
    canclista(1); // rimuove il primo elemento in cima alla lista
   return elem;
    }
  T top() const {
  if (isEmpty) {
   std::cout << "Errore: pila vuota." << std::endl;
    return T();
    }
        return leggilista(1);
    }
   bool isEmpty() const {
  return listavuota(); //verifica se la lista è vuota
  if (listavuota()){
  std::cout << "La condizione è vera" << std::endl;
else
    std::cout << "La condizione è falsa" << std::endl;
}
    }
    int size() const {
        return lunghezza(); // restituisce la lunghezza della lista
    }
};
