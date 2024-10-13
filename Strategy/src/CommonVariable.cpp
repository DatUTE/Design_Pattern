#include "CommonVariable.h"

std::ostream& operator<<(std::ostream& os, ShapeType c)
{
    switch(c)
    {
        case ShapeType::CIRCLE:         os << "CIRCLE";             break;
        case ShapeType::SQUARE:         os << "SQUARE";             break;
        case ShapeType::RECTANGLE:      os << "RECTANGLE";          break;
        default:                        os << "Doesn't supported";  break;
    }
    return os;
}