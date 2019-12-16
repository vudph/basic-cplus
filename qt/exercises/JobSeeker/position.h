#ifndef POSITION_H
#define POSITION_H
#include <QString>

class Position
{
public:
    Position(QString name, QString desc);
    QString toString();

private:
    QString m_Name;
    QString m_Description;
};

#endif // POSITION_H
