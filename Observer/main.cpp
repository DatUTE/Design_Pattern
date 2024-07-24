#include "inc/Tester.h"
#include "inc/Manager.h"
#include "inc/Staff.h"
#include "inc/Subject.h"

int main()
{
    Tester tester;
    Manager manager;
    Staff staff;
    Subject* observers = new Subject();

    observers->registerObserver(&tester);
    observers->registerObserver(&manager);
    observers->registerObserver(&staff);

    observers->handleMessage("replace director");
    return 0;
}