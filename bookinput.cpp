#include "book.h"
#include "bookinput.h"
#include "bookwriter.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>


BookInput::BookInput(QWidget *parent): QWidget(parent)
{
    setWindowTitle("Books");
    Book newbook;


    QGridLayout* layout = new QGridLayout();
    layout->addWidget(new QLabel("Title: "), 0, 0);
    layout->addWidget(titleLineEdit, 0, 1);

    layout->addWidget(new QLabel("Authors: "), 1, 0);
    layout->addWidget(authorsLineEdit, 1, 1);
//    newbook.setAuthors(authorsLineEdit);

    layout->addWidget(new QLabel("ISBN: "), 2, 0);
    layout->addWidget(isbnLineEdit, 2, 1);
//    newbook.setIsbn(isbnLineEdit);

    layout->addWidget(new QLabel("Publication Date: "), 3, 0);
    layout->addWidget(publicationDate, 3, 1);
//    newbook.setPublicationDate(publicationDate);

    QPushButton* OKPushButton = new QPushButton("OK");
    layout->addWidget(OKPushButton, 4, 0);
    QPushButton* CancelPushButton = new QPushButton("Cancel");
    layout->addWidget(CancelPushButton, 4, 1);



    this->setLayout(layout);


//    BookWriter bookw("test2.txt");
//    bookw.write(newbook);
}
