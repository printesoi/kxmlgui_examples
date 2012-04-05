#ifndef COMPONENTA_H
#define COMPONENTA_H

#include <KXMLGUIClient>
#include <KAction>

class ComponentA : public KXMLGUIClient
{

public:
    ComponentA();

private:
    KAction *action_a1;
    KAction *action_a2;
    void setupActions();

};

#endif