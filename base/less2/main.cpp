#include "1.cpp"
#include "2.cpp"
#include "3.cpp"
#include <iostream>

using namespace std;
void Task1()
{
    int m;
    cout << "Введите месяц: ";
    cin >> m;
    cout << EnterMonth(m) << endl;
}
void Task2()
{
    int account;
    cout << "Введите номер счёта: ";
    cin >> account;
    string owner;
    cout << "Введите имя владельца: ";
    cin >> owner;
    int cur_balance;
    cout << "Введите баланс: ";
    cin >> cur_balance;
    int new_balance;
    cout << "Введите новый баланс: ";
    cin >> new_balance;
    BankAccount new_account = AddAccount(account, owner, cur_balance, new_balance);
    cout << "Ваш счёт: " << new_account.owner << ", " << new_account.account << ", " << new_account.new_balance << endl;
}
void Task3()
{
    // string city ;
    // cout << "Введите город: ";
    // cin >> city;
    // string street;
    // cout << "Введите улицу: ";
    // cin >> street;
    // int house_number;
    // cout << "Введите номер дома: ";
    // cin >> house_number;
    // int flat_number;
    // cout << "Введите номер квартиры: ";
    // cin >> flat_number;
    // string index;
    // cout << "Введите индекс: ";
    // cin >> index;
    Adress adress = AddAdress("Москва", "Арбат", 12, 8, "123456");
    PrintAdress(adress);
    Adress adress2 = AddAdress("Ижевск", "Пушкина", 59, 143, "953769");
    PrintAdress(adress2);
}

int main(int argc, char const *argv[])
{
    Task1();
    Task2();
    Task3();
    return 0;
}
