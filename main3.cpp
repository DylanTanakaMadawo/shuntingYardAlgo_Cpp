#include <bits/stdc++.h>

using namespace std;
// Function to find precedence of
// operators.
int precedence(char po)
{
    if (po == '+' || po == '-')
        return 1;
    if (po == '*' || po == '/')
        return 2;
    return 0;
}

int main()
{
    cout << "Hello" << endl;
}