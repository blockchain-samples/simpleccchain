#ifndef BLOCK_H
#define BLOCK_H

#include <ctime>
#include <string>
#include <vector>
#include "Transaction.h"

class Block
{
private:
    long long int index;
    time_t timestamp;
    std::vector<Transaction> currentTransactions;
    long long int proof;
    std::string previousHash;


public:
}

#endif
