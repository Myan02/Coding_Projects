#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

class Artwork{
   public:
      Artwork();

      Artwork(string title, int yearCreated, Artist artist);

      string GetTitle();

      int GetYearCreated();

      void PrintInfo();
   
   private:
      string artworkName;
      int year;
      Artist creator;
};

#endif