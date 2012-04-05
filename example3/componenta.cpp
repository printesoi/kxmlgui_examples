#include "componenta.h"

#include <KXMLGUIClient>
#include <KApplication>
#include <KAction>
#include <KActionCollection>
#include <KStandardAction>
#include <klocale.h>

ComponentA::ComponentA(): KXMLGUIClient()
{
    setupActions();
}

void ComponentA::setupActions()
{
    action_a1 = new KAction(0);
    action_a1->setText(i18n("Action &A 1"));
    action_a1->setShortcut(Qt::CTRL + Qt::Key_A);
    actionCollection()->addAction("action_a1", action_a1);

    action_a2 = new KAction(0);
    action_a2->setText(i18n("Action &A 2"));
    action_a1->setShortcut(Qt::CTRL + Qt::Key_A);
    actionCollection()->addAction("action_a2", action_a2);

    setXMLFile("component_a.rc");
}