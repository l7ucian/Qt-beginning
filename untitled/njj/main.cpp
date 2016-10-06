#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication appl(argc, argv);
    QLabel *label = new QLabel("Foarte fain, dar daca trebuie sa-l configurez de fiecare data, e trist");
    label->show();
    
    return appl.exec();
}
