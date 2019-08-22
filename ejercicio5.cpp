#include <iostream>
using std::cout;

int main() {

    vector<int> a {1, 2, 3, 4, 5};
    for (auto i : a) {
        // Imprimir los numeros
    }
    return 0;
}


//Modificaciones
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

    vector<int> a {1, 2, 3, 4, 5};
    for (auto i : a) {
        cout<< i<< "\t";
    }
    return 0;
}
