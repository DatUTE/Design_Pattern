#include <iostream>
#include "IObserver.h"

class ISubject
{
    public:
    virtual void registerObserver(IObserver* obj) = 0;
    virtual void unregisterObserver(IObserver* obj) = 0;
    virtual void notifyMessage() = 0;
    virtual void handleMessage(const std::string& msg) = 0;
};