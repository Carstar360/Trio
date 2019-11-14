#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
int swapNum( int &red, int &green, int &blue); 

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, green, blue;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  swapNum(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
int swapNum( int &red, int &green, int &blue)
{
   
    if( red > blue && blue > green && red > green)
    {
        int temp = green;
        green = blue;
        blue = temp;
    }
    else if ( red < blue && blue < green && red < green)
    {
        int temp = red;
        red = green;
        green = blue;
        blue = temp;
    }
    else if ( red > blue && red < green && green > blue)
    {
        int temp = red;
        red = green;
        green = temp;
        blue = blue;
    }
    else if ( red < blue && red > green && blue > green)
    {
        int temp = red;
        red = blue;
        green = temp;
        blue = green;
    }
    else if ( red < green && green < blue && red < blue)
    {
        int temp = red;
        red = blue;
        green = green;
        blue = temp;
    }
    else if ( red > green && green > blue && red > blue)
    {
        red = red;
        green = green;
        blue = blue;
    }
    return 0;
}
