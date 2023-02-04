#include <string>
#include <iostream>
struct Adress
{
    std::string city;
    std::string street;
    int house_number;
    int flat_number;
    std::string index;
};
Adress AddAdress(std::string city, std::string street, int house_number, int flat_number, std::string index)
{
    Adress adress;
    adress.city = city;
    adress.street = street;
    adress.house_number = house_number;
    adress.flat_number = flat_number;
    adress.index = index;
    return adress;
}
void PrintAdress(Adress &adress)
{
    std::cout << "Город: " << adress.city << std::endl;
    std::cout << "Улица: " << adress.street << std::endl;
    std::cout << "Номер дома: " << adress.house_number << std::endl;
    std::cout << "Номер квартиры: " << adress.flat_number << std::endl;
    std::cout << "Индекс: " << adress.index << std::endl;
    std::cout << std::endl;
}