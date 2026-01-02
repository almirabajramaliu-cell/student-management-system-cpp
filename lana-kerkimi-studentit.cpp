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

// Funksioni për të kërkuar student sipas ID-së
void searchStudentByID(int searchID) {
    bool found = false;
    for (const auto& student : students) {
        if (student.id == searchID) {
            cout << "Studenti u gjet!\n";
            cout << "Emri: " << student.name << ", ID: " << student.id << ", Mosha: " << student.age << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Nuk u gjet asnjë student me ID:  " << searchID << endl;
    }
}

// Funksioni për të kërkuar student sipas emrit
void searchStudentByName(const string& searchName) {
    bool found = false;
    for (const auto& student : students) {
        if (student.name == searchName) {
            cout << "Studenti u gjet!\n";
            cout << "Emri: " << student.name << ", ID: " << student.id << ", Mosha: " << student.age << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Nuk u gjet asnjë student me emrin: " << searchName << endl;
    }
}