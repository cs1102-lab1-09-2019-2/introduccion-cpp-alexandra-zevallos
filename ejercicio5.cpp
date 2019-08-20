#include <iostream>
using std::cout;

int main() {

    vector<int> a {1, 2, 3, 4, 5};
    for (auto i : a) {
        // Imprimir los numeros
    }
}
//No sabia porque colocaba vector<int>a
//Cree un vector(array):
#include <iostream>
using std::cout;

int main() {
    int a;
    int vector[5]={1, 2, 3, 4, 5};
    for (int a=0; a<5; a++) {
      cout<< vector[a]<<"\t";
    } 
    return 0;
}
