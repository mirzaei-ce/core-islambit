// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ISLAMBIT_QT_ISLAMBITADDRESSVALIDATOR_H
#define ISLAMBIT_QT_ISLAMBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class IslambitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit IslambitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Islambit address widget validator, checks for a valid islambit address.
 */
class IslambitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit IslambitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // ISLAMBIT_QT_ISLAMBITADDRESSVALIDATOR_H
