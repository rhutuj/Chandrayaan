#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class sCraft
{
private:
    int x, y, z;
    char direction;

public:
    sCraft(int x0, int y0, int z0, char dir0)
    {
        x = x0;
        y = y0;
        z = z0;
        direction = dir0;
    }

    void moveForward()
    {
        if (direction == 'N')
            y++;
        else if (direction == 'S')
            y--;
        else if (direction == 'E')
            x++;
        else if (direction == 'W')
            x--;
        else if (direction == 'U')
            z++;
        else if (direction == 'D')
            z--;
    }

    void moveBackward()
    {
        if (direction == 'N')
            y--;
        else if (direction == 'S')
            y++;
        else if (direction == 'E')
            x--;
        else if (direction == 'W')
            x++;
        else if (direction == 'U')
            z--;
        else if (direction == 'D')
            z++;
    }

    void printPoints()
    {
        cout << "Current Coordinates: (" << x << ", " << y << ", " << z << "), Direction: " << direction << endl;
    }
};
int main()
{
    int xStart, yStart, zStart;
    char dirStart;
    cout << "Enter the starting co-ordinates" << endl;
    cin >> xStart >> yStart >> zStart;
    cout << "Enter the starting direction" << endl;
    cin >> dirStart;

    sCraft chandrayan(xStart, yStart, zStart, dirStart);
    vector<char> vec = {'f', 'b'};
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 'f')
        {
            chandrayan.moveForward();
        }

        else if (vec[i] == 'b')
        {
            chandrayan.moveBackward();
        }

        else if (vec[i] )
    }

    chandrayan.printPoints();
    return 0;
}