#include "if/IObserver.h"

class Staff : public IObserver
{
    public:
    void notify(const std::string& msg) override;
};