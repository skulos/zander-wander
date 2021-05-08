#ifndef BOOKINPUT_H
#define BOOKINPUT_H

#include "book.h"
#include <QLineEdit>
#include <QDateEdit>
#include <QDialog>

class BookInput : public QWidget{
    Q_OBJECT
public:
    explicit BookInput(QWidget* parent = 0);
private:
    Book* book;
    QLineEdit* titleLineEdit;
    QLineEdit* authorsLineEdit;
    QLineEdit* isbnLineEdit;
    QDateEdit* publicationDate;
};

#endif // BOOKINPUT_H
