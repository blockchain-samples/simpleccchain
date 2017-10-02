#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

struct Transaction
{
    std::string sender;
    std::string recipient;
    long long int amount;
}

#endif TRANSACTION_H
