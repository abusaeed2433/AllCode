
#include<bits/stdc++.h>


using namespace std;

double fv(double x, double y)
{
    return x+y;
}

int main()
{

    int n = 20;
    double h = 0.1/n;


    double yn;
    double x0 = 0, y0 = 1;

    for(int i=0; i<n; i++)
    {

        double k1 = h * fv(x0, y0);

        double k2 = h * fv( x0+h/2, y0+k1/2);

        double k3 = h * fv( x0+h/2, y0+k2/2);

        double k4 = h * fv( x0+h,y0+k3);

        double k = (k1 + 2*k2 + 2*k3 + k4)/6;

        yn = y0 + k;
        x0 = x0 + h;
        y0 = yn;

        cout << yn << endl;
    }

    cout << "Step: " << n << endl;
    cout << "Ans is:" << yn << endl;

}
