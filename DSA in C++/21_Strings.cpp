#include <iostream>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch -'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
// reverse of string
void reverse(char name[], int n)
{
    int e = n - 1;
    int s = 0;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

// length of string
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;
    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;

    cout << "Palindrome or not->" << checkPalindrome(name, len);
    return 0;
}