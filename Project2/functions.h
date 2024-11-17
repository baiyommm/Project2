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


#endif /* functions_h */
