#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "framework.h"

NS_FRAMEWORK_BEG

class Component
{
public:
    Component(Component* parent = 0);
    virtual ~Component();
    
    template<class T>
    T* facade ()
    {
        return 0;
    }
    
    template<class T>
    void delegate(Component* component)
    {
        
    }
private:
    Component*  m_parent;
};

NS_FRAMEWORK_END

#endif