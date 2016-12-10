//Assignment: CS FINAL C++
//Name:Alexis Pena
//Encrypt using swedish kid game
//Input word/Phrase and  replace the consonants with the consonant doubled and
   //with an "o" in between. EX: "b" is replaced by "bob", "r" is replaced
//with "ror", "h" is replaced with "hoh", and so on. Vowels are left intact
 //Y COUNTS as vowel

 #include <iostream>

 using namespace std;

int main()
{
        string SAMPLE;
        getline(cin, SAMPLE);
        string output = "";


        for(int i = 0; i < SAMPLE.length(); i++)
        {
                char XletterX =(SAMPLE.at(i));
                if((XletterX == 'a')||(XletterX == 'e')||(XletterX == 'i')||(XletterX == 'o')
                   ||(XletterX == 'u')||(XletterX == 'y')||(XletterX == 'A')||(XletterX == 'E')||(XletterX == 'I')||(XletterX == 'O')||(XletterX == 'U')||    (XletterX == 'Y'))
                {
                        output += XletterX;
                } else {
                        output += XletterX;
                        output.append("o");
                        output += XletterX;
                }
        }
        cout << output << endl;;
        return 0;
}



