#include <iostream>
using namespace std;
int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    int numberOfTiles = ceil(n/a) * ceil(m/a);
    cout<<numberOfTiles;
}