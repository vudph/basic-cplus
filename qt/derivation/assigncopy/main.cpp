#include "bank.h"
#include "account.h"

int main() {
  QString listing;
   {                                                   /* Begin internal block. */
      Bank bnk;
      Account* a1 = new Account(1, 423, "Gene Kelly");
      JointAccount* a2 = new JointAccount(2, 1541, "Fred Astaire",
         "Ginger Rodgers");
      JointAccount* a3 = new JointAccount(*a1, "Leslie Caron");
      bnk << a1;
      bnk << a2;
      bnk << a3;
      JointAccount* a4 = new JointAccount(*a3);        /* What's this? */
      bnk << a4;
      listing = bnk.getAcctListing();
    }                                                  /* At this point, all four Accounts are destroyed as part of the destruction of the bank. */
    qDebug() << listing;
    qDebug() << "Now exit program" ;
}
