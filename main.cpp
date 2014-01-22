#include <iostream>
#include <cstdlib>
#include "utils.h"

using namespace std;

int main() {
    int* tablica = generator();
    wypisz(tablica);
    cout << "Suma tablicy: " << suma(tablica) << std::endl;
    cout << "Min tablicy: " << min(tablica,10) << std::endl;
    cout << "Max tablicy: " << max(tablica,10) << std::endl;
    return 0;
}
