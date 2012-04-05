#ifndef COMPONENTB_H
#define COMPONENTB_H

#include <KXMLGUIClient>
#include <KAction>

class ComponentB : public KXMLGUIClient
{
public:
    ComponentB();


private:
    KAction* component_b;
    void setupActions();
};

#endif