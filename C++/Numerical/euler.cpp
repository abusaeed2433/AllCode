#include<bits/stdc++.h>

using namespace std;


double fv(double x, double y){
    return (y-x)/(y+x); // dy/dx
}

int main()
{
    double x0, y0, xn;

    cout << "Initial x: "; cin>> x0;

    cout << "Corresponding y: "; cin >> y0;

    cout<<"Point to be calculated at x: "; cin>>xn;

    double h = .02;

    int n = (xn-x0) / h;


    double yn;
    for(int i=0; i < n; i++)
    {
        yn = y0 + h * fv(x0,y0);

        y0 = yn;
        x0 = x0+h;
    }

    cout << "Ans is: " << yn << endl;

    return 0;
}
