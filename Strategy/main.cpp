#include <iostream>

#include "Context.h"
#include "CommonVariable.h"

int main()
{
    Context obj;

    int choice;
    std::cout << "1. Circle\n" << "2. Rectangle\n" << "3. Square\n";
    std::cout << "Enter you shape type: ";
    std::cin >> choice;

    ShapeType type;
    switch(choice)
    {
        case 1: 
            type = ShapeType::CIRCLE;
            break;
        case 2:
            type = ShapeType::RECTANGLE;
            break;
        case 3:
            type = ShapeType::SQUARE;
            break;
        default:
            std::cout << "dont support type " << choice << std::endl;
    }

    obj.setStrategy(type);
    obj.doBussinessLogic();

    return 0;
}