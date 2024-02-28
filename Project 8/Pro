#include <iostream>
#include <string>
#include <cmath> // for abs()

using namespace std;

const int ROWS = 5;
const int COLUMNS = 5;

// Function to print the seating chart
void printChart(const char chart[ROWS][COLUMNS]) {
    cout << "   A  B  C  D  E" << endl; // Seat identifiers
    for (int i = 0; i < ROWS; ++i) {
        cout << i + 1 << "  ";
        for (int j = 0; j < COLUMNS; ++j) {
            cout << chart[i][j] << "  ";
        }
        cout << endl;
    }
}

// Function to assign a student to a seat
void assignSeat(char chart[ROWS][COLUMNS], const string& studentName, int row, int column, bool preferNear, const string& preferredStudentName) {
    if (row < 1 || row > ROWS || column < 1 || column > COLUMNS) {
        cout << "Invalid row or column number." << endl;
        return;
    }
    if (chart[row - 1][column - 1] == '-') {
        chart[row - 1][column - 1] = studentName[0]; // Only store the first character of the student name
        cout << studentName << " has been assigned to row " << row << ", column " << column << "." << endl;
    } else {
        cout << "Seat at row " << row << ", column " << column << " is already occupied." << endl;
        return;
    }

    if (preferNear) {
        // Check nearby seats for preferred student
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int newRow = row + i;
                int newColumn = column + j;
                if (newRow >= 1 && newRow <= ROWS && newColumn >= 1 && newColumn <= COLUMNS &&
                    (i != 0 || j != 0) && chart[newRow - 1][newColumn - 1] == preferredStudentName[0]) {
                    cout << studentName << " has been assigned to a seat near " << preferredStudentName << "." << endl;
                    return;
                }
            }
        }
    }
}

// Function to find an empty seat
pair<int, int> findEmptySeat(const char chart[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            if (chart[i][j] == '-') {
                return {i + 1, j + 1};
            }
        }
    }
    return {-1, -1}; // Return {-1, -1} if no empty seat is found
}

// Bonus: Function to count the number of empty seats
int countEmptySeats(const char chart[ROWS][COLUMNS]) {
    int emptySeatsCount = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            if (chart[i][j] == '-') {
                ++emptySeatsCount;
            }
        }
    }
    return emptySeatsCount;
}

int main() {
    char chart[ROWS][COLUMNS] = {
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'}
    };

    // Example usage
    printChart(chart);

    // Ask user for input to assign a student to a seat
    string studentName, preferredStudentName;
    int row, column;
    bool preferNear;

    cout << "Enter student name: ";
    cin >> studentName;
    cout << "Enter desired row (1-" << ROWS << "): ";
    cin >> row;
    cout << "Enter desired column (1-" << COLUMNS << "): ";
    cin >> column;
    cout << "Prefer near another student? (1 for yes, 0 for no): ";
    cin >> preferNear;
    if (preferNear) {
        cout << "Enter the name of the preferred student: ";
        cin >> preferredStudentName;
    }

    assignSeat(chart, studentName, row, column, preferNear, preferredStudentName);

    printChart(chart);

    auto emptySeat = findEmptySeat(chart);
    cout << "First empty seat found at row " << emptySeat.first << ", column " << emptySeat.second << endl;
    cout << "Number of empty seats: " << countEmptySeats(chart) << endl;

    return 0;
}
