#include "Pila.h"

int main() {

    std::cout << "Test della pila" << std::endl;
    Pila<int> pila;

    std::cout << "aggiunta di elementi nella pila" << std::endl;
    pila.push(10);
    pila.push(20);
    pila.push(30);

    std::cout << "elemento in cima " << pila.top() << std::endl;

    std::cout << "togliere gli elementi dalla pila" << std::endl;
    while (!pila.isEmpty()) {
        std::cout << "rimosso" << pila.pop() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Test della coda" << std::endl;
    Coda<int> coda;

    std::cout << "aggiunta di elementi nella coda" << std::endl;
    coda.enqueue(100);
    coda.enqueue(200);
    coda.enqueue(300);

    std::cout << "elemento in cima " << coda.front() << std::endl;

    std::cout << "togliere gli elementi dalla coda" << std::endl;
    while (!coda.isEmpty()) {
        std::cout << "rimosso " << coda.dequeue() << std::endl;
    }

   return 0;
}
