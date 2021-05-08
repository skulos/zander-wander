//#include <QCoreApplication>
#include <QApplication>
//#include <QTextStream>
#include <iostream>
#include "book.h"
#include "bookinput.h"
#include "bookwriter.h"

//QTextStream cout(stdout);
//QTextStream cin(stdin);

int main(int argc, char *argv[])
{
//    using namespace std;
    QApplication app(argc, argv);
//    app.setApplicationName("Books");


//    using namespace std;
//    int enter;
//    cout << "Test: ";
//    cin >> enter;


//    Book atest;
//    BookWriter bw("test.txt");
//    bw.write(atest);

    BookInput bi;
    bi.show();


    return app.exec();
}
