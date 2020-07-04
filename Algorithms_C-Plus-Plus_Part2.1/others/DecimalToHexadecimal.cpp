#include <iostream>

using namespace std;

int main(void)
{
    int valueToConvert = 0; //Holds user input
    int hexArray[8];
    int i = 0;
    char HexValues[] = "0123456789ABCDEF";

    cout << "Enter a Decimal Value " << endl; //Displays request to stdout
    cin >> valueToConvert;

    while (valueToConvert > 15)
    {                                         // Dec to Hex Algorithm
        hexArray[i++] = valueToConvert % 16; //Gets remaider
        valueToConvert /= 16;
    }
    hexArray[i] = valueToConvert; //Gets last value

    cout << "Hex Value: ";
    while (i >= 0)
        cout << HexValues[hexArray[i--]];
    
    cout << endl;
    return 0;
}