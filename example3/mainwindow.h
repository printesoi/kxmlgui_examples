#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <KXmlGuiWindow>
#include <KTextEdit>

class MainWindow : public KXmlGuiWindow
{
public:
    MainWindow(QWidget *parent=0);

public Q_SLOTS:
    void slotComponentA1();

private:
    KTextEdit* textArea;
    void setupActions();
};

#endif