#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reverseWords(string S);
int main()
{
    cout << reverseWords("i.like.this.program.very.much") << endl;

    return 0;
}
string reverseWords(string S)
{
    int counter = 0, j = 0, subStart = 0, subRange = 0;
    string result = "";
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '.')
        {
            counter++;
        }
    }
    string myArr[counter + 1];
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != '.')
        {
            subRange++;
        }
        else if (S[i] == '.')
        {

            myArr[j] = S.substr(subStart, subRange);
            subStart += subRange + 1;
            subRange = 0;
            j++;
        }
        if (i == S.size() - 1)
        {
            myArr[j] = S.substr(subStart, subRange);
        }
    }
    for (int i = counter; i > -1; i--)
    {
        result += myArr[i];
        if (i != 0)
        {
            result += ".";
        }
    }
    return result;
}