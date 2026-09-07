// Intermediate14.cpp
// Displays the total number of pizzas sold
// and the percentage contributed by each size.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int smallPizzas = 0;
    int mediumPizzas = 0;
    int largePizzas = 0;
    int familyPizzas = 0;
    int totalPizzas = 0;

    double smallPercent = 0.0;
    double mediumPercent = 0.0;
    double largePercent = 0.0;
    double familyPercent = 0.0;

    cout << "Enter the number of small pizzas: ";
    cin >> smallPizzas;

    cout << "Enter the number of medium pizzas: ";
    cin >> mediumPizzas;

    cout << "Enter the number of large pizzas: ";
    cin >> largePizzas;

    cout << "Enter the number of family pizzas: ";
    cin >> familyPizzas;

    totalPizzas = smallPizzas + mediumPizzas
                + largePizzas + familyPizzas;

    smallPercent = smallPizzas * 100.0 / totalPizzas;
    mediumPercent = mediumPizzas * 100.0 / totalPizzas;
    largePercent = largePizzas * 100.0 / totalPizzas;
    familyPercent = familyPizzas * 100.0 / totalPizzas;

    cout << fixed << setprecision(1);

    cout << "Total pizzas sold: " << totalPizzas << endl;
    cout << "Small: " << smallPercent << "%" << endl;
    cout << "Medium: " << mediumPercent << "%" << endl;
    cout << "Large: " << largePercent << "%" << endl;
    cout << "Family: " << familyPercent << "%" << endl;

    return 0;
}