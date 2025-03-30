#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;

    cout << "Enter your Word: ";
    cin >> a;

    if (a == "ABACUS") {
        cout << "Abacus is a wooden rack that has metal rods that is believed to be the first computer.";
    } else if (a == "NAPIER'S_BONES") {
        cout << "Uses Ivory Strips or Bones that is marked with numbers to multiply and divide.";
    } else if (a == "PASCALINE") {
        cout << "Works by rotating a wheel. For every revolution, it rotates the neighboring wheel that totals up on top of the machine.";
    } else if (a == "STEPPED_RECKONER") {
        cout << "It also rotates like the Pascaline but instead, it uses fluted drums.";
    } else if (a == "ANALYTICAL_ENGINE") {
        cout << "A machine developed by Charles Babbage capable of performing any mathematical problem. It also stores data and has permanent memory.";
    } else {
        cout << "No word is found.";
    }

    return 0;
}