#include "pch.h"
#include "framework.h"
#include "Kim-Lab-2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int main()
{
    KimMenu menu;
    std::shared_ptr<KimStudent> student;

    while (true) {
        KimUtils::printMenu();
        switch (KimUtils::choose(5)) {
        case 0:
            std::cout << "\nExit\n";
            return 0;
        case 1:
            menu.addStudent();
            break;
        case 2:
            menu.output();
            break;
        case 3:
            menu.writeToFile();
            break;
        case 4:
            menu.readFromFile();
            break;
        case 5:
            menu.clear();
            break;
        default:
            break;
        }
    }
    return 0;
}
