#include<iostream>

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
    int xStart = 0, yStart = 0, zStart = 0;
    int dirStart  = 'N';
    sCraft chandrayan(xStart, yStart, zStart, dirStart);
    

    return 0;
}