#include <QCoreApplication>

#include "duck.h"
#include "turkey.h"
#include "mallardduck.h"
#include "wildturkey.h"
#include "turkeyadapter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck *duck = new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);
    cout << "Turkey" << endl;
    turkey->gobble();
    turkey->fly();
    cout << endl << "Duck" << endl;
    duck->quack();
    duck->fly();
    cout << endl << "TurkeyAdapter" << endl;
    turkeyAdapter->quack();
    turkeyAdapter->fly();

    return a.exec();
}
