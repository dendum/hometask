#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];
    char new_str[size];
    int count = 0;
    
    cout << "Enter your line:" << endl;
<<<<<<< HEAD
    cin.getline(str,z);
=======
    cin.getline(str,size);
>>>>>>> 682a9df (Add new Lab 3 code)

    for ( int x = 0; x < size; x++)
    {
        if (str[x] != ' ')
        {
            new_str[count] = str[x];
            count++;
        }
    }
    
    cout << "Your new line:" << endl << new_str << endl;
}
