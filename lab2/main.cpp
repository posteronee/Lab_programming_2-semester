#include <iostream>
#include "menu.h"
#include "cmake-build-debug/menu.h"

using namespace std;

int main() {
    Menu settings;
    Menu::select(settings);
    return 0;
}
