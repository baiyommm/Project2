#include <iostream>
#include <memory>
#include "functions.h"

using namespace std;
using namespace Portfolio;

int main() {
    
    int capacity = 10;
    int count = 0;
    unique_ptr<Stock[]> stocks(new Stock[capacity]);
    
    int choice;
    do {
        cout << "\nStock Portfolio Management System\n";
        cout << "1. Add Stock\n";
        cout << "2. Display Portfolio\n";
        cout << "3. Analyze Stock\n";
        cout << "4. Save Portfolio to File\n";
        cout << "5. Load Portfolio from File\n";
        cout << "6. Search Stock\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addStock(stocks.get(), count);
                break;
            case 2:
                displayPortfolio(stocks.get(), count);
                break;
            case 3:
                if (count > 0) {
                    for (int i = 0; i < count; ++i) {
                        analyzeStock(stocks[i]);
                    }
                } else {
                    cout << "No stocks to analyze.\n";
                }
                break;
            case 4:
                savePortfolio(stocks.get(), count);
                break;
            case 5:
                loadPortfolio(stocks.get(), count);
                break;
            case 6:
                searchStock(stocks.get(), count);
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
