#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int N = 12;
    char vowel[N] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    string str;
    cout << "Введите строку из символов (латинские буквы):" << endl;
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
        cout << "Количество гласных символов: " << kolichestvo << endl;
    else
        cout << "Гласных символов не найдено!" << endl;
    return 0;
}