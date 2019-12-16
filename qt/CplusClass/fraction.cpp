#include <QString>
#include "fraction.h"

int Fraction::s_assigns = 0;
int Fraction::s_copies = 0;
int Fraction::s_ctors = 0;
int Fraction::s_cverts = 0;

Fraction::Fraction(int n, int d) : m_Numerator(n), m_Denominator(d) {
    ++s_ctors;
}

Fraction::Fraction(int n) : m_Numerator(n), m_Denominator(1) {
    ++s_cverts;
}

Fraction::Fraction(const Fraction& other) : m_Numerator(other.m_Numerator), m_Denominator(other.m_Denominator) {
    ++s_copies;
}

Fraction& Fraction::operator=(const Fraction& other) {
    if (this != &other) {
        m_Numerator = other.m_Numerator;
        m_Denominator = other.m_Denominator;
        ++s_assigns;
    }
    return *this;
}

void Fraction::set(int nn, int nd) {
    m_Numerator = nn;
    m_Denominator = nd;
}

double Fraction::toDouble() const {
    return 1.0 * m_Numerator / m_Denominator;
}

QString Fraction::toString() const {
    return QString("%1 / %2").arg(m_Numerator).arg(m_Denominator);
}

QString Fraction::report() {
    return QString(" [assigns: %1 copies: %2 ctors: %3  cverts: %4] ")
            .arg(s_assigns).arg(s_copies).arg(s_ctors).arg(s_cverts);
}

Fraction Fraction::multiply(Fraction f2) {
    return Fraction(m_Numerator * f2.m_Numerator, m_Denominator * f2.m_Denominator);
}

Fraction Fraction::times(const Fraction &other) {
    return Fraction(m_Numerator * other.m_Numerator, m_Denominator * other.m_Denominator);
}
