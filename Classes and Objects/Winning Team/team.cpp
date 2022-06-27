#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;
   
// TODO: Implement GetWinPercentage()

// TODO: Implement PrintStanding()

void Team::SetName(string nameInput)
{
    name = nameInput;
}

void Team::SetWins(int winsInput)
{
    wins = winsInput;
}

void Team::SetLosses(int lossesInput)
{
    losses = lossesInput;
}

string Team::GetName() const
{
    return name;
}

int Team::GetWins() const
{
    return wins;
}

int Team::GetLosses() const
{
    return losses;
}

double Team::GetWinPercentage()
{
    return winPercentage = static_cast<double>(wins) / (wins + losses);
}

void Team::PrintStanding()
{
    cout << fixed << setprecision(2);

    if (GetWinPercentage() >= 0.50)
    {
        cout << "Win percentage: " << GetWinPercentage() << endl;
        cout << "Congratulations, Team " << GetName() << " has a winning average!";
    }
    else 
    {
        cout << "Win percentage: " << GetWinPercentage() << endl;
        cout << "Team " << GetName() << " has a losing average.";
    }

    cout << endl;
}
