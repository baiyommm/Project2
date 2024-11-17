#include <iostream>
#include <fstream>
#include <iomanip>
#include "functions.h"

using namespace std;

namespace Portfolio {

// Function to add a stock to the portfolio
void addStock(Stock* stocks, int& count) {
    cout << "Enter ticker symbol: ";
    cin >> stocks[count].ticker;
    cout << "Enter number of shares: ";
    cin >> stocks[count].shares;
    cout << "Enter purchase price: ";
    cin >> stocks[count].purchasePrice;
    cout << "Enter current price: ";
    cin >> stocks[count].currentPrice;
    cout << "Enter 5 historical prices: ";
    for (int i = 0; i < 5; ++i) {
        cin >> stocks[count].historicalPrices[i];
    }
    count++;
    cout << "Stock added successfully!\n";
}
