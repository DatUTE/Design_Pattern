#include <iostream>
#ifndef IObserver_H_INCLUDED
#define IObserver_H_INCLUDED
class IObserver
{
    public:
    virtual void notify(const std::string& msg) = 0;
};
#endif
