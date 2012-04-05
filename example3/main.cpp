#include <KApplication>
#include <KAboutData>
#include <KCmdLineArgs>

#include "mainwindow.h"

int main (int argc, char *argv[])
{
    KAboutData aboutData( "kxmlexample", "kxmlexample",
    ki18n("Example of xml merging"), "1.0",
          ki18n("Example of KDE XML-GUI"),
          KAboutData::License_GPL,
          ki18n("Copyright (c) 2011 Dodon Victor") );
          KCmdLineArgs::init( argc, argv, &aboutData );
          KApplication app;

          MainWindow* window = new MainWindow();
          window->show();
          return app.exec();
}