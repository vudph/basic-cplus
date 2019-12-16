#include <QDebug>
#include "bank.h"
#include "account.h"

Bank::~Bank() {
    qDeleteAll(m_Accounts);
    m_Accounts.clear();
}

Bank& Bank::operator<< (Account* acct) {
   m_Accounts << acct;
   return *this;
}

QString Bank::getAcctListing() const {
   QString listing("\n");
   foreach(Account* acct, m_Accounts)
      listing += QString("%1\n").arg(acct->getName()); /* getName()
                                                          is virtual. */
   return listing;
}
//end
