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
    component_b = new KAction(0);
    component_b->setText(i18n("Component &B"));
    component_b->setShortcut(Qt::CTRL + Qt::Key_A);
    actionCollection()->addAction("componentb", component_b);

    setXMLFile("component_b.rc");
}