#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist()
{
    name = "unknown";
    birth = -1;
    death = -1;
}

Artist::Artist(string artistName, int birthYear, int deathYear)
{
    name = artistName;
    birth = birthYear;
    death = deathYear; 
}

string Artist::GetName() const
{
    return name;
}

int Artist::GetBirthYear() const
{
    return birth;
}

int Artist::GetDeathYear() const
{
    return death;
}

void Artist::PrintInfo() const
{
    cout << "Artist: " << name << " ";
    
    if ((birth > -1) && (death > -1))
    {
        cout << "(" << birth << " to " << death << ")";
    }
    else if ((birth > -1) && (death == -1))
    {
        cout << "(" << birth << " to present)";
    }
    else
    {
        cout << "(unknown)";
    }

    cout << endl;
}