#include<bits/stdc++.h>

using namespace std;

#define f1(x,y,z)  (85-6*y+z)/27
#define f2(x,y,z)  (72-6*x-2*z)/15
#define f3(x,y,z)  (110-x-y)/54

using namespace std;


int main()
{
    float x0=0, y0=0, z0=0, x1, y1, z1, e,e1;
    int step=1;

    e = 0.000001;

    do
    {
        x1 = f1(x0,y0,z0);
        y1 = f2(x1,y0,z0);
        z1 = f3(x1,y1,z0);

        e1 = max( fabs(x0-x1),fabs(y0-y1));
        e1 = max(e,fabs(z0-z1));

        step++;

        x0 = x1; y0 = y1; z0 = z1;

    }

    while(e1>e);

    cout << x0 << ", " << y0 << "," << z0 << endl;

    return 0;
}
