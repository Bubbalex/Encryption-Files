//Assignment: CS FINAL C++
//Name:Alexis Pena
// decrytps using ASCII by subtracting a # to all the letters

#include <iostream>

using namespace std;

char Decrypt(char SAMPLE);
int main()
{

    char SAMPLE = 0;
    while((SAMPLE = getchar()) != EOF)
    {
        cout << Decrypt(SAMPLE);
    }
}
char Decrypt(char SAMPLE) //grabs input and adds 4 using ASCII table.
{
    return SAMPLE == '\n' ? SAMPLE : SAMPLE-2;
}
