//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_RECEIPTMAIL_H
#define LAB04_SOLID_RECEIPTMAIL_H

#include "Receipt.h"

class ReceiptMail : public Receipt {
public:
ReceiptMail();
ReceiptMail(int rNum);
string toString(Game &g1) const override;
};


#endif //LAB04_SOLID_RECEIPTMAIL_H