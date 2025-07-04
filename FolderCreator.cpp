#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    string path;
    string name;
    string command;
    cout << "What do you want to do? \n1. Create Folder \n2. Exit" << endl;
    cin >> input;
    switch (input) {
    case 1:
        cout << "Where do you want to create this folder?" << endl;
        cin >> path;
        cout << "What do you want to name the folder?" << endl;
        cin >> name;
        command = "mkdir " + path + name;
        system(command.c_str());
        system("PAUSE");
    case 2:
        return 0;
    }
}