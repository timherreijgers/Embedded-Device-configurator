/*
 * Copyright (c) 2022 Tim Herreijgers
 */

#include <QtGui>

#include <iostream>

#ifdef _MSC_VER
int __stdcall WinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPSTR /*lpCmdLine*/, int /*nShowCmd*/)
#else
int main(int __argc, char **__argv)
#endif
{
    QApplication app(__argc, __argv);

    auto *mainWindow = new QWidget();
    mainWindow->setMinimumSize(700, 350);

    mainWindow->show();

    return app.exec();
}