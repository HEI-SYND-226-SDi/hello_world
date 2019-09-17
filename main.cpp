#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Hello " << (argc > 1 ? argv[1] : "Stranger");
}
