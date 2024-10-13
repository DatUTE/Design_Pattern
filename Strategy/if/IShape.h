#pragma once

class IShape
{
    public:
    ~IShape(){};
    virtual double calculateArea() = 0;
    virtual void setupAttribute() = 0;
};