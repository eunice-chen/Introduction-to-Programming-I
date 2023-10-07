#include <iostream>

using namespace std;

int main()
{
    int S, D;
    cin >> S >> D;
    {
        for (int z=S; z<D; z=z+S)
            S=S+1;
    }
    cout << S << endl;
    return 0;
}
