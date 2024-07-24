#include "inc/Subject.h"

void Subject::registerObserver(IObserver* obj)
{
    std::cout << "register complete\n";
    m_listRegister.push_back(obj);
}

void Subject::unregisterObserver(IObserver* obj)
{
    auto it = std::find(m_listRegister.begin(), m_listRegister.end(), obj);
    if(it != m_listRegister.end())
    {
        m_listRegister.erase(it, it + 1);
    }
}

void Subject::notifyMessage()
{
    std::cout << "how many register: " << m_listRegister.size() << std::endl;
    for(auto& _register : m_listRegister)
    {
        _register->notify(m_msg);
    }
}

void Subject::handleMessage(const std::string& msg)
{
    std::cout << "Subject has received a msg: " << msg << std::endl;
    m_msg = msg;
    std::cout << "set msg complete\n";
    notifyMessage();
    std::cout << "handleMessage complete\n";
}