[CIS25] Project 2: Stock Portfolio Management System
(Created By Chatchapong Thuaypha)

Description

This Stock Portfolio Management System is a C++ program created to help users manage a virtual stock portfolio. 
It allows users to add stocks, view their portfolio, analyze stock performance, save and load portfolio data 
from a file, and search for specific stocks. The project demonstrates important C++ programming concepts, including 
arrays, pointers, strings, structures, enumerations, and stream operations.

Features

(1) Add Stock: Add a new stock to the portfolio with details like ticker symbol, number of shares, purchase price, current price, and historical prices.

(2) Display Portfolio: View all stocks in the portfolio with relevant information, including ticker, shares, purchase price, and current price.

(3) Analyze Stock: Analyze the performance of each stock based on the purchase and current price, indicating whether it is in profit, loss, or neutral status.

(4) Save Portfolio: Save the current portfolio data to a text file for future reference and persistence.

(5) Load Portfolio: Load portfolio data from a text file, restoring the previously saved stock records.

(6) Search Stock: Search for a specific stock by its ticker symbol and display its details if found.

(0) Exit: Exit program with 0.


Core Functions and Rubric Specifications

1. Functionality
 - Basic Functionality:
       The program runs without bugs and errors. It fulfills the main requirements of adding, viewing, analyzing, saving, loading, and searching stocks.
 - Correct Implementation of Concepts:
       The code demonstrates the use of arrays, pointers, strings, structures, enumerations, and stream operations.

2. Usage of Arrays and Pointers
 - Arrays:
      The program uses an array of [Stock] structures to manage the list of stocks.
      It includes multi-dimensional arrays for storing historical price data [historicalPrices].
 - Pointers and Memory Management:
      The program uses [unique_ptr] (smart pointer) for dynamic memory management of the [Stock] array.
      Smart pointers eliminate the need for manual memory cleanup. This prevents potential memory leaks.

3. String and Stream Operations
 - String Handling:
      C++ strings are used for storing and managing stock ticker symbols and user input.
      The [searchStock] function utilizes string comparison to find a specific stock.
 - Stream Utilization:
      File I/O operations [ifstream and ofstream] are used in [savePortfolio() and loadPortfolio()] functions to read from and write to a text file.
      The program handles input/output errors.

4. Structures and Advanced Types
 - Structures:
      The [Stock] structure contains fields for ticker, shares, purchase price, current price, and historical prices.
      It is used to organize and store data for each stock entry.
 - Enumerations and Smart Pointers:
      An enumeration [StockStatus] is used to define the status of each stock (PROFIT, LOSS, NEUTRAL). This function is used in performance analysis.
      [unique_ptr] is used for automatic memory management of the [Stock] array.

5. Code Efficiency and Optimization
 - Optimization:
      Algorithms are implemented for searching in [searchStock()] and analyzing stock data in [analyzeStock()].
 - Memory Usage:
      The use of smart pointer [unique_ptr] ensures memory allocation and deallocation.
      The program dynamically manages the stock array and resizes as necessary based on user input.

6. Documentation and Style
 - Code Documentation:
      Each function has comments explaining the purpose, input, and output of the function.
 - Readability and Style:
      Consistent naming conventions and a logical structure are maintained the code.

YouTube Link: https://youtu.be/fvCvhyFbdL4

Example Screenshots of the Program:

<img width="378" alt="Screenshot 2024-11-17 at 10 17 56 PM" src="https://github.com/user-attachments/assets/c6bc35b6-bd29-4f99-9aa5-b474b487f071">
<img width="438" alt="Screenshot 2024-11-17 at 10 18 12 PM" src="https://github.com/user-attachments/assets/a42f7630-2275-429c-b425-fdd3f8506255">
<img width="621" alt="Screenshot 2024-11-17 at 10 18 31 PM" src="https://github.com/user-attachments/assets/003b4222-57c4-42c0-a616-e90b5cc17923">

