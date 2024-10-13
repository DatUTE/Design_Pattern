#include <iostream>
#include "IShape.h"

#define PI 3.14

class CircleShape : public IShape
{
    public:
    CircleShape(){};
    ~CircleShape(){};

    void setupAttribute() override
    {
        std::cout << "enter radius: ";
        std::cin >> m_radius;
    }

    double calculateArea() override
    {
        return m_radius*m_radius*PI;
    }

    private:
    double m_radius;
};