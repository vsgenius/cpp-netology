
#include <iostream>

using namespace std;

enum class Month
{
    january,
    february,
    march,
    aprile,
    may,
    june,
    july,
    august,
    semtember,
    octouber,
    november,
    december
};
string EnterMonth(int m)
{
    Month month{m - 1};
    switch (month)
    {
    case Month::january:
        return "Январь";
    case Month::february:
        return "Февраль";
    case Month::march:
        return "Март";
    case Month::aprile:
        return "Апрель";
    case Month::may:
        return "Май";
    case Month::june:
        return "Июнь";
    case Month::july:
        return "Июль";
    case Month::august:
        return "Август";
    case Month::semtember:
        return "Сентябрь";
    case Month::octouber:
        return "Октябрь";
    default:
        throw invalid_argument("Нет такого месяца");
    }
}