#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definimi i strukturës Student
struct Student {
    string name;  // Emri i studentit
    int id;       // ID-ja e studentit
    int age;      // Mosha e studentit
};

// Krijo një vektor për të ruajtur studentët
vector<Student> students;

// Funksioni për të shtuar një student
void addStudent() {
    Student newStudent;
    cout << "Shkruaj emrin e studentit: ";
    getline(cin, newStudent.name);  // Përdorim getline për të marrë emrin me hapësira
    cout << "Shkruaj ID-në e studentit: ";
    cin >> newStudent.id;
    cout << "Shkruaj moshën e studentit: ";
    cin >> newStudent.age;

    students.push_back(newStudent); // Shto studentin në listë
    cout << "Studenti u shtua me sukses!\n";
}

// Funksioni kryesor
int main() {
    // Thirret funksioni për të shtuar një student
    addStudent();

    // Shfaq të gjithë studentët
    cout << "\nLista e Studentëve:\n";
    for (const auto& student : students) {
        cout << "Emri: " << student.name << ", ID: " << student.id << ", Mosha: " << student.age << endl;
    }

    return 0;
}

// ------------------------------------------------------------
// Ky modul implementon funksionalitetin bazë për menaxhimin
// e studentëve në një aplikacion console në C++.
//
// Aktualisht përfshin:
// - Strukturën Student
// - Shtimin e një studenti në memorje
// - Shfaqjen e listës së studentëve
//
// Funksionalitete shtesë (kërkim, ruajtje në file, etj.)
// do të implementohen në branch-e të veçanta nga anëtarët
// e tjerë të ekipit.
// ------------------------------------------------------------

