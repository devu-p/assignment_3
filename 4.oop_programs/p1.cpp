// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
#include <string>

using namespace std;

class Cricketer
{
protected:
    string name;
    string team;
    int matches;

public:
    Cricketer(string n, string t, int m)
    {
        name = n;
        team = t;
        matches = m;
    }

    void inputData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter team: ";
        cin >> team;
        cout << "Enter number of matches: ";
        cin >> matches;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Team: " << team << endl;
        cout << "Matches: " << matches << endl;
    }
};

class Batsman : public Cricketer
{
private:
    int totalRuns;
    float averageRuns;
    string bestPerformance;

public:
    Batsman() : Cricketer("", "", 0)
    {
        totalRuns = 0;
        averageRuns = 0.0;
        bestPerformance = "";
    }

    void inputData()
    {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns()
    {
        if (matches > 0)
        {
            averageRuns = (float)totalRuns / matches;
        } else
        {
            averageRuns = 0.0;
        }
    }

    void displayData()
    {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main()
{
    Batsman batsman;

    cout << "Enter batsman data:" << endl;
    batsman.inputData();

    cout << "\nBatsman Data:" << endl;
    batsman.displayData();

    return 0;
}

