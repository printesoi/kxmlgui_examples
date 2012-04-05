#include "componentb.h"

#include <KXMLGUIClient>
#include <KApplication>
#include <KAction>
#include <KActionCollection>
#include <KStandardAction>
#include <klocale.h>

ComponentB::ComponentB(): KXMLGUIClient()
{
    setupActions();
}

void ComponentB::setupActions()
{
    action_b = new KAction(0);
    action_b->setText(i18n("Action &B"));
    action_b->setShortcut(Qt::CTRL + Qt::Key_C);
    actionCollection()->addAction("componentb", action_b);

    setXMLFile("component_b.rc");
}
