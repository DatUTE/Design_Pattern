#include "if/IObserver.h"

class Manager : public IObserver
{
    public:
    void notify(const std::string& msg) override;
};