#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class sCraft
{
    private:
    int x,y,z;
    char direction;

    public:
    sCraft(int x0, int y0, int z0, char dir0)
    {
        x = x0;
        y = y0;
        z = z0;
        direction = dir0;
    }
};
int main()
{
    int xStart, yStart , zStart;
    char dirStart;
    cout<<"Enter the starting co-ordinates"<<endl;
    cin>>xStart>>yStart>>zStart;
    cout << "Enter the starting direction" << endl;
    cin>>dirStart;
    
    sCraft chandrayan(xStart, yStart, zStart, dirStart);
    vector<char> vec = {'f'};
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == 'f')
        {
            chandrayan.moveForward();
        }
    }
    return 0;
}