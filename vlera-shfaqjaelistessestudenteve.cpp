#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string emer;
    int mosha;
};

void shfaqStudentet(const vector<Student>& lista) {
    if (lista.empty()) {
        cout << "Lista e studenteve eshte e zbrazet." << endl;
        return;
    }

    cout << "Lista e studenteve:" << endl;
    for (const auto& student : lista) {
        cout << "ID: " << student.id
            << ", Emri: " << student.emer
            << ", Mosha: " << student.mosha << endl;
    }
}

int main() {
    vector<Student> lista = {
        {1, "Ardi", 20},
        {2, "Nina", 22},
        {3, "Elira", 21}
    };

    shfaqStudentet(lista);

    return 0; 
}