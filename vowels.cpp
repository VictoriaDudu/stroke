#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int N = 12;
    char vowel[N] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    string str;
    cout << "Enter the string" << endl;
    getline(cin, str);
    int kolichestvo = 0;
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (str[i] == vowel[j])
                kolichestvo++;
        }
    }
    if (kolichestvo)
        cout << "Nomber of vowels: " << kolichestvo << endl;
    else
        cout << "No vowels" << endl;
    return 0;
}