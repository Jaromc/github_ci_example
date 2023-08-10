#include "application.h"

// This test ensures the position can be set and returned correctly
int main()
{
   Application app;

   const int X = 1;
   const int Y = 2;

   app.setPosition(X,Y);
   if (app.getX() != X)
   {
      return 1;
   }

   if (app.getY() != Y)
   {
      return 1;
   }

   return 0;
}