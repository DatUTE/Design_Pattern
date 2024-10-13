#include "Context.h"
#include "CircleShape.h"
#include "SquareShape.h"
#include "RectangleShape.h"

void Context::setStrategy(ShapeType type)
{
    std::cout << "Set shape strategy with type " << type << std::endl;
    switch(type)
    {
        case ShapeType::CIRCLE:
            m_strategy = std::make_unique<CircleShape>();
            break;
        case ShapeType::SQUARE:
            m_strategy = std::make_unique<SquareShape>();
            break;
        case ShapeType::RECTANGLE:
            m_strategy = std::make_unique<RectangleShape>();
            break;
        default:
            std::cout << "type: " << type << "does not supported";
            break;
    }
}

void Context::doBussinessLogic()
{
    std::cout << "Do bussiness logic - calculate area\n";
    m_strategy->setupAttribute();
    auto area = m_strategy->calculateArea();

    std::cout << "Area = " << area << std::endl;
}