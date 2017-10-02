#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "Block.h"

class Blockchain
{
private:
    std::vector<Block> chain;
    std::vector<Transaction> currentTransactions;

public:
    Block newBlock (const proof, const previousHash);
    long long int newTransaction (std::string sender, std::string recipient, long long int amount);
    Block lastBlock;

    static std::string hash(Block) const;
}

#endif
