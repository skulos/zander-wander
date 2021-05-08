#ifndef BOOKWRITER_H
#define BOOKWRITER_H
#include "book.h"

class BookWriter{
public:
    BookWriter(QString file);
//    QString getFileName();
    void write(Book &book) const;
private:
    Book b;
    QString fileName;
};

#endif // BOOKWRITER_H
