#include <iostream>
#include "IShape.h"

class RectangleShape : public IShape
{
    public:
    RectangleShape(){};
    ~RectangleShape(){};

    void setupAttribute() override
    {
        std::cout << "enter length: ";
        std::cin >> m_length;
        std::cout << "enter width: ";
        std::cin >> m_width;
    }

    double calculateArea() override
    {
        return m_length*m_width;
    }

    private:
    double m_length;
    double m_width;
};