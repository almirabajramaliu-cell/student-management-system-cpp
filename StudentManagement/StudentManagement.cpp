#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definimi i struktur�s Student
struct Student {
    string name;  // Emri i studentit
    int id;       // ID-ja e studentit
    int age;      // Mosha e studentit
};

// Krijo nj� vektor p�r t� ruajtur student�t
vector<Student> students;

// Funksioni p�r t� shtuar nj� student
void addStudent() {
    Student newStudent;
    cout << "Shkruaj emrin e studentit: ";
    getline(cin, newStudent.name);  // P�rdorim getline p�r t� marr� emrin me hap�sira
    cout << "Shkruaj ID-n� e studentit: ";
    cin >> newStudent.id;
    cout << "Shkruaj mosh�n e studentit: ";
    cin >> newStudent.age;

    students.push_back(newStudent); // Shto studentin n� list�
    cout << "Studenti u shtua me sukses!\n";
}

// Funksioni kryesor
int main() {
    // Thirret funksioni p�r t� shtuar nj� student
    addStudent();

    // Shfaq t� gjith� student�t
    cout << "\nLista e Student�ve:\n";
    for (const auto& student : students) {
        cout << "Emri: " << student.name << ", ID: " << student.id << ", Mosha: " << student.age << endl;
    }

    return 0;
}

// ------------------------------------------------------------
// Ky modul implementon funksionalitetin baz� p�r menaxhimin
// e student�ve n� nj� aplikacion console n� C++.
//
// Aktualisht p�rfshin:
// - Struktur�n Student
// - Shtimin e nj� studenti n� memorje
// - Shfaqjen e list�s s� student�ve
//
// Funksionalitete shtes� (k�rkim, ruajtje n� file, etj.)
// do t� implementohen n� branch-e t� ve�anta nga an�tar�t
// e tjer� t� ekipit.
// ------------------------------------------------------------

