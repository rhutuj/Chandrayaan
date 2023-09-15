#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class sCraft
{
private:
    int x, y, z;
    char direction, leftDir;

public:
    sCraft(int x0, int y0, int z0, char dir0, char dirl0)
    {
        x = x0;
        y = y0;
        z = z0;
        direction = dir0;
        leftDir = dirl0;
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


    void turnLeft()
    {
        if (direction == 'N')
            direction = 'W', leftDir = 'S';
        else if (direction == 'S')
            direction = 'E', leftDir = 'N';
        else if (direction == 'E')
            direction = 'N', leftDir = 'W';
        else if (direction == 'W')
            direction = 'S', leftDir = 'E';

        else if (direction == 'U' && leftDir == 'W')
            direction = 'W', leftDir = 'D';

        else if (direction == 'U' && leftDir == 'E')
            direction = 'E', leftDir = 'D';

        else if (direction == 'U' && leftDir == 'N')
            direction = 'N', leftDir = 'D';

        else if (direction == 'U' && leftDir == 'S')
            direction = 'S', leftDir = 'D';

        else if (direction == 'D'&& leftDir == 'W')
            direction = 'W', leftDir = 'U';

        else if (direction == 'D' && leftDir == 'E')
            direction = 'E', leftDir = 'U';

        else if (direction == 'D' && leftDir == 'N')
            direction = 'N', leftDir = 'U';

        else if (direction == 'D' && leftDir == 'S')
            direction = 'S', leftDir = 'U';
    }

    void turnRight()
    {
        if (direction == 'N')
            direction = 'E';
        else if (direction == 'S')
            direction = 'W';
        else if (direction == 'E')
            direction = 'S';
        else if (direction == 'W')
            direction = 'N';
        else if (direction == 'U')
            direction = 'S';
        else if (direction == 'D')
            direction = 'N';

        else if (direction == 'U' && leftDir == 'E')
            direction = 'W', leftDir = 'U';

        else if (direction == 'U' && leftDir == 'W')
            direction = 'E', leftDir = 'U';

        else if (direction == 'U' && leftDir == 'S')
            direction = 'N', leftDir = 'U';

        else if (direction == 'U' && leftDir == 'N')
            direction = 'S', leftDir = 'U';

        else if (direction == 'D' && leftDir == 'E')
            direction = 'W', leftDir = 'D';

        else if (direction == 'D' && leftDir == 'W')
            direction = 'E', leftDir = 'D';

        else if (direction == 'D' && leftDir == 'N')
            direction = 'S', leftDir = 'D';

        else if (direction == 'D' && leftDir == 'S')
            direction = 'N', leftDir = 'D';
    }

    void turnUp()
    {
        
    }

    void turnDown()
    {
        
    }

    void printPoints()
    {
        cout << "Current Coordinates: (" << x << ", " << y << ", " << z << "), Direction: " << direction << endl;
    }
};
int main()
{
    int xStart, yStart, zStart;
    char dirStart, dirLeft;
    cout << "Enter the starting co-ordinates" << endl;
    cin >> xStart >> yStart >> zStart;
    cout << "Enter the starting direction" << endl;
    cin >> dirStart;
    cin >> dirLeft;

    sCraft chandrayan(xStart, yStart, zStart, dirStart, dirLeft);
    
    vector<char> vec = {'f', 'b', 'l', 'r', 'u'};
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

        else if (vec[i] == 'l')
        {
            chandrayan.turnLeft();
        }

        else if (vec[i] == 'r')
        {
            chandrayan.turnRight();
        }

        else if (vec[i] == 'u')
        {
            chandrayan.turnUp();
        }

        else if (vec[i] == 'd')
        {
            chandrayan.turnDown();
        }
    }

    chandrayan.printPoints();
    return 0;
}