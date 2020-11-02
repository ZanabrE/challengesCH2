//This program will have all of Chaper 2 
//challenges as a practice.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Sum of two numbers.
    //Variables with ddata type and assigned values.
    int num1 = 50;
    int num2 = 100;
    int total;

    //Calculations
    total = num1 + num2;

    //Displaying my header.
    cout << "-------------------------------------\n";
    cout << "The Sum of both numbers.\n";
    cout << "-------------------------------------\n";
    //Display the total of the sum of both numbers.
    cout << "The sum of both numbers are: " << total << endl;

    //Sales prediction.
    //Variable with data type and assigned values.
    double sales = 8.6;
    double percentage = 0.58;
    double totalSales;

    //Calculations.
    totalSales = sales * percentage;

    //Displaying my header.
    cout << "--------------------------------------\n";
    cout << "Sales Prediction\n";
    cout << "--------------------------------------\n";
    //Display the prediction on the total sales for this year.
    cout << "East Coast division will generate this year the amount of: $" << totalSales << " millions in sales this year.\n";
    cout << "-----------------------------------------\n";

    //Sales Tax.
    //Variables with data type and assigned values.
    double Sales;
    double stateTax;
    double countyTax;
    double totalStateTax;
    double totalCountyTax;

    //Get the total sales.
    cout << "Please enter the total sales of the purchase: ";
    cin >> Sales;

    //Get the State Sales Tax.
    cout << "Please enter the State Sales Tax: ";
    cin >> stateTax;

    //Get the County Sales Tax.
    cout << "Please enter the County Sales Tax: ";
    cin >> countyTax;

    //Calculations.
    totalStateTax = sales + stateTax;
    totalCountyTax = sales + countyTax;

    //Displaying my header.
    cout << "-------------------------------------\n";
    cout << "Sales Tax\n";
    cout << "-------------------------------------\n";
    //Display the total sales tax of both State and County Taxes.
    cout << "The total sales of State Tax is: $" << totalStateTax << "\n";
    cout << "The total sales of County Tax is: $" << totalCountyTax << "\n";

    //Restaturant Bill.
    //Variables with data type and assigned values.
    double meal = 88.67;
    double tax = 0.0675;
    double tip = 0.2;
    double totalMealCost;
    double totalTipAmount;
    double totalBill;

    //Calculations.
    totalMealCost = meal * tax;
    totalTipAmount = (meal + totalMealCost) * tip;
    totalBill = meal + totalMealCost + totalTipAmount;

    //Displaying my header.
    cout << "--------------------------------------\n";
    cout << "Restaurant Bill\n";
    cout << "--------------------------------------\n";
    //Display the meal cost, tax amount, tip amount and the total bill.
    cout << setprecision (2) << fixed;
    cout << "The cost of the meal is: $" << meal << "\n";
    cout << "The tax amount is: $" << totalMealCost << "\n";
    cout << "The tip amount is: $" << totalTipAmount << "\n";
    cout << "The total bill is: $" << totalBill << "\n";
    cout << "\n";

    return 0;
}
