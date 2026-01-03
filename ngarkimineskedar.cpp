#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string emri;
    string mbiemri;
    string indeksi;
    string drejtimi;
    int viti;
};

vector<Student> studentet;
void ruajNeSkedar() {
    ofstream file("students.txt");
    if (!file) {
        cout << "Gabim ne hapjen e skedarit!\n";
        return;
    }

    for (size_t i = 0; i < studentet.size(); i++) {
        file << studentet[i].emri << " "
             << studentet[i].mbiemri << " "
             << studentet[i].indeksi << " "
             << studentet[i].drejtimi << " "
             << studentet[i].viti << endl;
    }
    file.close();
}

void ngarkoNgaSkedari() {
    ifstream file("students.txt");
    if (!file)
        return;

    Student s;
    while (file >> s.emri >> s.mbiemri >> s.indeksi >> s.drejtimi >> s.viti) {
        studentet.push_back(s);
    }
    file.close();
}

void shtoStudent() {
    Student s;

    cout << "Emri: ";
    cin >> s.emri;

    cout << "Mbiemri: ";
    cin >> s.mbiemri;

    cout << "Indeksi: ";
    cin >> s.indeksi;

    cout << "Drejtimi: ";
    cin >> s.drejtimi;

    cout << "Viti i studimit: ";
    cin >> s.viti;

    studentet.push_back(s);
    ruajNeSkedar();

    cout << "Studenti u shtua me sukses!\n";
}

void shfaqStudentet() {
    if (studentet.empty()) {
        cout << "Nuk ka studente te regjistruar.\n";
        return;
    }

    for (size_t i = 0; i < studentet.size(); i++) {
        cout << "\nStudenti " << i + 1 << endl;
        cout << "Emri: " << studentet[i].emri << endl;
        cout << "Mbiemri: " << studentet[i].mbiemri << endl;
        cout << "Indeksi: " << studentet[i].indeksi << endl;
        cout << "Drejtimi: " << studentet[i].drejtimi << endl;
        cout << "Viti: " << studentet[i].viti << endl;
    }
}

int main() {
    ngarkoNgaSkedari();

    int zgjedhja = 0;

    do {
        cout << "\n--- MENAXHIMI I STUDENTEVE ---\n";
        cout << "1. Shto student\n";
        cout << "2. Shfaq studentet\n";
        cout << "3. Dil\n";
        cout << "Zgjedhja: ";
        cin >> zgjedhja;

        switch (zgjedhja) {
            case 1:
                shtoStudent();
                break;
            case 2:
                shfaqStudentet();
                break;
            case 3:
                cout << "Programi u mbyll.\n";
                break;
            default:
                cout << "Zgjedhje e pavlefshme!\n";
        }

    } while (zgjedhja != 3);

    return 0;
}