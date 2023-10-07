#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }
    else
    {
        return gcd(num2%num1, num1);
    }
}

int findGCD(int arr[],int n)
{
    int result = arr [0];
    for (int i=1; i<n ; i++)
    {
        result = gcd(arr[i],result);
        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}



int main()
{
    int n;
    int arr[5] = {102, 340, 153, 187, 425};
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "Hello world!" << endl;
    cout << "The Final GCD of {102, 340, 153, 187, 425} is: "<< findGCD(arr,n) << endl;

    return 0;
}
