#include <iostream>
#include "utils.h"

int main() {
    int tablica[] = generator();
    wypisz(tablica);
    cout << "Suma tablicy: " << suma(tablica) << std::endl;
    cout << "Min tablicy: " << min(tablica) << std::endl;
    cout << "Max tablicy: " << max(tablica) << std::endl;
    return 0;
}