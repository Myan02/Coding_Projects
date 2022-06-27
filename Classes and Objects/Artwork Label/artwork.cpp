#include "Artwork.h"
#include <iostream>

Artwork::Artwork()
{
    artworkName = "unknown";
    year = -1;
}

Artwork::Artwork(string title, int yearCreated, Artist artist)
{
    artworkName = title;
    year = yearCreated;
    creator = artist;
}

string Artwork::GetTitle()
{
    return artworkName;
}

int Artwork::GetYearCreated()
{
    return year;
}

// TODO: Define PrintInfo() function
//       Call the PrintInfo() function in the Artist class to print an artist's information 
void Artwork::PrintInfo()
{
    creator.PrintInfo();

    cout << "Title: " << artworkName << ", " << year;
    cout << endl;
}
