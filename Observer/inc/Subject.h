#include "if/ISubject.h"
#include "if/IObserver.h"
#include <vector>
#include <algorithm>

class Subject : public ISubject
{
    private:
    std::vector<IObserver*> m_listRegister;
    std::string m_msg;

    public:
    Subject(){};
    virtual ~Subject(){};
    void registerObserver(IObserver* obj) override;
    void unregisterObserver(IObserver* obj) override;
    void notifyMessage() override;
    void handleMessage(const std::string& msg);
};