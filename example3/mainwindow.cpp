#include "mainwindow.h"
#include "componenta.h"
#include "componentb.h"

#include <KApplication>
#include <KAction>
#include <KLocale>
#include <KActionCollection>
#include <KStandardAction>

MainWindow::MainWindow(QWidget *parent)
: KXmlGuiWindow(parent)
{
    textArea = new KTextEdit;
    setCentralWidget(textArea);

    setupActions();
}

void MainWindow::setupActions()
{
    KAction* clearAction = new KAction(this);
    clearAction->setText(i18n("&Clear"));
    clearAction->setIcon(KIcon("document-new"));
    clearAction->setShortcut(Qt::CTRL + Qt::Key_W);
    actionCollection()->addAction("clear", clearAction);
    connect(clearAction, SIGNAL(triggered(bool)),
            textArea, SLOT(clear()));

    KStandardAction::quit(kapp, SLOT(quit()),
                          actionCollection());


    insertChildClient(new ComponentA());
    insertChildClient(new ComponentB());
    setupGUI(Default, "kxmlexampleui.rc");
}

void MainWindow::slotComponentA1()
{
    textArea->setText("ComponentA 1 action triggered");
}
