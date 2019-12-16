#ifndef STUDENT_H
#define STUDENT_H
#include <QString>

class Student  {
 public:
    Student(QString nm, long id, QString major, int year = 1);
    ~Student() {}
    QString getClassName() const; /* Const member function is used when we want a function that should not be used to change the value of the data members (e.g. m_Name)
                                     It means that *this is const inside that member function, i.e. it doesn't alter the object.
                                  */
    QString toString() const;
 private:
    QString m_Name;
    QString m_Major;
    long m_StudentId;
 protected:
    int m_Year;
    QString yearStr() const;
};

class Undergrad: public Student {
 public:
    Undergrad(QString name, long id, QString major, int year, int sat);
    QString getClassName() const;
    QString toString() const;
 private:
    int m_SAT;  /* Scholastic Aptitude Test score total. */

};

class GradStudent : public Student {
 public:
    enum Support { ta, ra, fellowship, other };
    GradStudent(QString nm, long id, QString major,
                int yr, Support support);

    QString getClassName() const ;
    QString toString() const;
 protected:
    static QString supportStr(Support sup) ;
 private:
    Support  m_Support;
};

#endif // STUDENT_H
