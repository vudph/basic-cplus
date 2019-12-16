#ifndef PERSON_H
#define PERSON_H
#include "position.h"
#include "employer.h"

class Person
{
public:
    Person(QString name);
    void setPosition(Employer newC, Position newP);
    QString toString();
private:
    QString m_Name;
    bool m_Employed;
    Position m_Position;
    Employer m_Employer;
};

#endif // PERSON_H
