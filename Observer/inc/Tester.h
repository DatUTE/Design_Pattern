#include "if/IObserver.h"

class Tester : public IObserver
{
    public:
    void notify(const std::string& msg) override;
};