
int main() {
    vector<vector<int>> v{{1, 2}, {3, 4}, {5, 6}};
    for (auto a : v) {
        for (auto i : a) {
            // imprimir i
        }
        // salto de linea
    }
}


//Modificaciones
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {
    vector<vector<int>> v{{1, 2}, {3, 4}, {5, 6}};
    for (auto a : v) {
        for (auto i : a) {
            cout<< i<< "\t";
        }
        cout<< "\n";
    }
    return 0;
}
