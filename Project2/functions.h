#ifndef functions_h
#define functions_h
#include <string>
#include <memory>

namespace Portfolio {

// Enumeration for stock status
enum class StockStatus { PROFIT, LOSS, NEUTRAL };

// Structure for stock information
struct Stock {
    std::string ticker;
    int shares;
    double purchasePrice;
    double currentPrice;
    double historicalPrices[5]; // Array to store historical prices
};


// Function declarations
void addStock(Stock* stocks, int& count);
void displayPortfolio(const Stock* stocks, int count);
void analyzeStock(const Stock& stock);
void savePortfolio(const Stock* stocks, int count);
void loadPortfolio(Stock* stocks, int& count);
void searchStock(const Stock* stocks, int count);
StockStatus determineStatus(double purchasePrice, double currentPrice);
void cleanUp(Stock* stocks);

}

#endif
