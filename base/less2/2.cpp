#include <string>
struct BankAccount
{
    int account;
    std::string owner;
    int cur_balance;
    int new_balance;
};
BankAccount AddAccount(int account, std::string owner, int cur_balance, int new_balance)
{
    BankAccount new_account;
    new_account.account = account;
    new_account.cur_balance = cur_balance;
    new_account.new_balance = new_balance;
    new_account.owner = owner;

    return new_account;
}