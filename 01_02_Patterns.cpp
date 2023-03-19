// STRIVER BHAIYA QUESTIONS -

#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n + 1 - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // For space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (n - i) * 2 + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for (int i=1;i<=n*2-1;i++)
    {
        if (i<n){
            for (int j=1;j<=i;j++){
                cout << "*";
            }
            cout <<endl;
        }

        else {
            for (int j=0;j<2*n-i;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}

void pattern11(int n){
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout << j;
        }
        // cout << endl;

        for(int j=1;j<=(2*n-2*i);j++){
            cout << " ";
        }
        // cout << endl;

        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    cout << "\n----PATTERN 1----\n"
         << endl;
    pattern1(5);
    cout << "\n----PATTERN 2----\n"
         << endl;
    pattern2(5);
    cout << "\n----PATTERN 3----\n"
         << endl;
    pattern3(5);
    cout << "\n----PATTERN 4----\n"
         << endl;
    pattern4(5);
    cout << "\n----PATTERN 5----\n"
         << endl;
    pattern5(5);
    cout << "\n----PATTERN 6----\n"
         << endl;
    pattern6(5);
    cout << "\n----PATTERN 7----\n"
         << endl;
    pattern7(5);
    cout << "\n----PATTERN 8----\n"
         << endl;
    pattern8(5);
    cout << "\n----PATTERN 9----\n"
         << endl;
    pattern9(5);
    cout << "\n----PATTERN 10----\n"
         << endl;
    pattern10(5);
    cout << "\n----PATTERN 11----\n"
         << endl;
    pattern11(5);
}
