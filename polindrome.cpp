
#include <iostream>
#include <string.h>
using namespace std;
string palindrome(string S)
{
	string P = S;
	reverse(P.begin(), P.end());

	if (S == P) {
		return "is palindrome";
	}
	else {
		return "isn't palindrome";
	}
}
int main()
{
	string S;
	cout << "word: ";
	cin >> S;
	cout << palindrome(S)<<"\n";

	return 0;
}