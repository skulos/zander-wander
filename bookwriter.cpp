#include <QFile>
#include <QTextStream>
#include "bookwriter.h"

BookWriter::BookWriter(QString file){
    fileName = file;
}

void BookWriter::write(Book& book) const
{
    QFile file("textfile.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream toFile(&file);
    QString str, authors;


    str.append(book.getTitle());
    foreach(const QString &author, book.getAuthors()){
        authors.append(author);
    }
    str.append(authors);
    str.append(book.getIsbn());
    str.append(book.getPublicationDate().toString());


    toFile << str;
    file.close();
}
