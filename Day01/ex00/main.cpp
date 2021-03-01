#include "Pony.hpp"

void ponyOnTheStack() {
    Pony poney("Macaron", 5);
    poney.cute();
}

void ponyOntheHeap() {
    Pony *poney = new Pony("Flocon de neige", 18);
    poney->cute();
    delete poney;
}

int main() {
    ponyOnTheStack();
    ponyOntheHeap();
    return (0);
}