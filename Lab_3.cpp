#include <iostream>

using namespace std;

int main()
{
    const int z = 1000;
    char str[z];
    char new_str[z];
    int y = 0;
    
    cout << "Enter your line:" << endl;
    cin.getline(str, 128);

    for ( int x = 0; x < z; x++)
    {
        if (str[x] != ' ')
        {
            new_str[y] = str[x];
            y++;
        }
    }
    
    cout << "Your new line:" << endl;
    cout << new_str << endl;
}
