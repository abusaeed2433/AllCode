#include<bits/stdc++.h>


using namespace std;


double fv(double x)
{
    return x*x - 4*x - 10; // -2, -1
}


void calc(double& x0, double& x1, double& x2)
{
    x0 = (x1+x2)/2;

    double f0 = fv(x0);
    double f1 = fv(x1);
    double f2 = fv(x2);

    if(f0 * f1 < 0)
    {
        x2 = x0;
    }
    else
    {
        x1 = x0;
    }
}


int main()
{
    double x0, x1, x2;


    cout<<"Starting guess: ";
    cin >> x1;

    cout<<"Ending guess: ";
    cin >> x2;

    double e = 0.0000001;

    calc(x0,x1,x2);
    double prev = x0;

    calc(x0,x1,x2);
    double cur = x0;

    int step = 0;

    while(abs(cur-prev) > e)
    {
        step++;
        prev = cur;
        calc(x0,x1,x2);
        cur = x0;
    }

    cout << "Steps: " << step << endl;
    cout<< "Ans is: "<<  x0 << endl;

    return 0;
}
