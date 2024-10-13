#include <iostream>
#include "IShape.h"

class SquareShape : public IShape
{
    public:
    SquareShape(){};
    ~SquareShape(){};

    void setupAttribute() override
    {
        std::cout << "enter lenght side:";
        std::cin >> m_length;
    }

    double calculateArea() override
    {
        return m_length*m_length;
    }

    private:
    double m_length;
};