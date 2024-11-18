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

// Function to display the stock portfolio
void displayPortfolio(const Stock* stocks, int count) {
    cout << "\nCurrent Portfolio:\n";
    cout << left << setw(10) << "Ticker" << setw(10) << "Shares"
    << setw(15) << "Purchase Price" << setw(15) << "Current Price" << endl;
    for (int i = 0; i < count; ++i) {
        cout << left << setw(10) << stocks[i].ticker << setw(10) << stocks[i].shares
        << setw(15) << stocks[i].purchasePrice << setw(15) << stocks[i].currentPrice << endl;
    }
}

// Function to analyze stock performance
void analyzeStock(const Stock& stock) {
    StockStatus status = determineStatus(stock.purchasePrice, stock.currentPrice);
    cout << "Analysis for " << stock.ticker << ": ";
    switch (status) {
        case StockStatus::PROFIT:
            cout << "The stock is in PROFIT.\n";
            break;
        case StockStatus::LOSS:
            cout << "The stock is in LOSS.\n";
            break;
        case StockStatus::NEUTRAL:
            cout << "The stock performance is NEUTRAL.\n";
            break;
    }
}

// Function to save the portfolio to a file
void savePortfolio(const Stock* stocks, int count) {
    ofstream file("portfolio.txt");
    if (file.is_open()) {
        file << count << endl;
        for (int i = 0; i < count; ++i) {
            file << stocks[i].ticker << " " << stocks[i].shares << " "
            << stocks[i].purchasePrice << " " << stocks[i].currentPrice << " ";
            for (double price : stocks[i].historicalPrices) {
                file << price << " ";
            }
            file << endl;
        }
        file.close();
        cout << "Portfolio saved successfully.\n";
    } else {
        cout << "Error opening file.\n";
    }
}

// Function to load the portfolio from a file
void loadPortfolio(Stock* stocks, int& count) {
    ifstream file("portfolio.txt");
    if (file.is_open()) {
        file >> count;
        for (int i = 0; i < count; ++i) {
            file >> stocks[i].ticker >> stocks[i].shares
            >> stocks[i].purchasePrice >> stocks[i].currentPrice;
            for (double& price : stocks[i].historicalPrices) {
                file >> price;
            }
        }
        file.close();
        cout << "Portfolio loaded successfully.\n";
    } else {
        cout << "Error opening file.\n";
    }
}

// Function to search for a stock by ticker symbol
void searchStock(const Stock* stocks, int count) {
    string ticker;
    cout << "Enter ticker symbol to search: ";
    cin >> ticker;
    for (int i = 0; i < count; ++i) {
        if (stocks[i].ticker == ticker) {
            cout << "Stock found: " << stocks[i].ticker << ", Shares: "
            << stocks[i].shares << ", Purchase Price: " << stocks[i].purchasePrice
            << ", Current Price: " << stocks[i].currentPrice << endl;
            return;
        }
    }
    cout << "Stock not found.\n";
}

// Function to determine stock status
StockStatus determineStatus(double purchasePrice, double currentPrice) {
    if (currentPrice > purchasePrice) {
        return StockStatus::PROFIT;
    } else if (currentPrice < purchasePrice) {
        return StockStatus::LOSS;
    }
    return StockStatus::NEUTRAL;
}

}
