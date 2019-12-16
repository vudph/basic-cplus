#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "position.h"
#include "person.h"

class Employer
{
public:
    Employer(QString name, QString market);
    bool hire(Person& newHire, Position pos);
    QString toString();

private:
    QString m_Name;
    QString m_Market;
};

#endif // EMPLOYER_H
