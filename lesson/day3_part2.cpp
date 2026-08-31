#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float apple = 1.25;
    float banana = 0.75;
    float milk = 2.50;
    int appleQuantity,bananaQuantity,milkQuantity;

    cout << "Enter the amount of apple: ";
    cin >> appleQuantity;
    cout << "Enter the amount of banana: ";
    cin >> bananaQuantity;
    cout << "Enter the amount of milk bottle: ";
    cin >> milkQuantity;

    float totalApple = apple * appleQuantity;
    float totalBanana = banana * bananaQuantity;
    float totalMilk = milk * milkQuantity;
    float grandTotal = totalApple + totalBanana + totalMilk;

    cout << fixed << setprecision(2);
    cout << "-------------------------------------" << endl;
    cout << "Receipts: " << endl;
    cout << "Apple Quantity: " << appleQuantity << " Price: $" << totalApple << endl;
    cout << "Banana Quantity: " << bananaQuantity << " Price: $" << totalBanana << endl;
    cout << "Milk Quantity: " << milkQuantity << " Price: $" << totalMilk << endl;
    cout << "-------------------------------------" << endl;
    cout << "Grand total: $" << grandTotal << endl;

    return 0;
}