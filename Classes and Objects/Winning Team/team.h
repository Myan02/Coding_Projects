#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team 
{
    public:
        void SetName(string nameInput);
        void SetWins(int winsInput);
        void SetLosses(int lossesInput);

        string GetName() const;
        int GetWins() const;
        int GetLosses() const;

        double GetWinPercentage();

        void PrintStanding();

    private:
        string name;
        int wins;
        int losses;
        double winPercentage;
};

#endif