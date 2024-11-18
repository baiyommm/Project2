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
        
        while (<#condition#>) {
            <#statements#>
        }
        
        
        
        return 0;
    }
}
