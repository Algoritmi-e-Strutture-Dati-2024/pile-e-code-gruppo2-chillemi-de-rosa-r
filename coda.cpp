#include <iostream>
#include "ListaPuntatori.h" 
template <typename T>
class Coda {
private:
 ListaPuntatori<T> lista; 
public:
Coda() {}
 void enqueue(T elem) {
 inslista(elem, lunghezza() + 1);   }
T dequeue() {
if (isEmpty()) {
    std::cout << "Errore: coda vuota." << std::endl;
 return T(); 
}
T valore = leggilista(1);
canclista(1);
return valore; }
 T front() const {
if (isEmpty()) 
{ std::cout << "Errore: coda vuota." << std::endl;
return T(); }
return leggilista(1); }  
bool isEmpty() const {
 return listavuota(); }
    int size() const {
        return lunghezza();
    }
};
