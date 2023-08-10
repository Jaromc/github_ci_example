#pragma once

class Application
{
public:
   Application(){}
   ~Application(){}

   void setPosition(int x, int y);
   int getX() const;
   int getY() const;

 private:
   int m_x = 0;
   int m_y = 0;  
};