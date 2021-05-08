#include "book.h"
//#include <QFile>
//#include <QTextStream>
//#include <iostream>


Book::Book(){
    //Empty
}

Book::Book(QString t, QStringList a, QString i, QDate p)
    : title(t), authors(a), isbn(i), publicationDate(p){
    // Empty
}

//SETTERS
void Book::setTitle(QString t) {
    t = getTitle();
}

void Book::setAuthors(QStringList a) {
    a = getAuthors();
}

void Book::setIsbn(QString i) {
    i = getIsbn();
}

void Book::setPublicationDate(QDate p) {
    p = getPublicationDate();
}

//GETTERS
QString Book::getTitle() const {
    return title;
}
QStringList Book::getAuthors() const {
    return authors;
}
QString Book::getIsbn() const {
    return isbn;
}
QDate Book::getPublicationDate() const {
    return publicationDate;
}




