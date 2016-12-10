#include<iostream>
using namespace std;
int main()
{
        string SAMPLE;
        getline(cin, SAMPLE);
        string output = "";

        for(int i = 0; i < SAMPLE.length();)
        {
                char XletterX =(SAMPLE.at(i));
                if((XletterX == 'a')||(XletterX == 'e')||(XletterX == 'i')||(XletterX == 'o')
                    ||(XletterX == 'u')||(XletterX == 'y')||(XletterX == 'A')||(XletterX == 'E')||(XletterX == 'I')||(XletterX == 'O')||(XletterX == 'U')||(XletterX == 'Y'))
                {
                    output += XletterX;
                    i++;
                } else {
                        output += XletterX;
                        i+=3;
                }
        }
        cout << output << endl;

return 0;

}
