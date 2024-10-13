#include <iostream>
#include <memory>

#include "IShape.h"
#include "CommonVariable.h"

class Context
{
    public:
    Context(){};
    ~Context(){};

    void setStrategy(ShapeType shape);
    void doBussinessLogic();

    private:
    std::unique_ptr<IShape> m_strategy;
};
