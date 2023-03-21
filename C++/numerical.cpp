#include<bits/stdc++.h>

using namespace std;


void replaceChar(int& i, string& s)
{

    char& ch = s[i];

    if(isdigit(ch)) return;

    if(ch == '=' || ch == '+')
    {
        ch = ' ';
        return;
    }

    if(ch == 'x' || ch == 'y' || ch == 'z')
    {
        if(i-1 < 0 || !isdigit(s[i-1]))
        {
            ch = '1';
            return;
        }
        ch = ' ';
        return;
    }

    if(ch == '-')
    {
        string s1 = s.substr(0,i);
        string s2 = s.substr(i,s.size());
        s = s1 + " " + s2;
        i++;
    }

}

void extractNumber(vector<string>& st)
{

    ofstream ofn("aaa.txt");


    for(int kk=0; kk<st.size(); kk++)
    {

        int i = 0, n = st.size();

        string& s = st[kk];

        while(i<s.size())
        {
            replaceChar(i,s);
            i++;
        }

        ofn << s << endl;

    }
    ofn.close();
}

void takeInput(vector< vector<double>>& v)
{
    int n = 3;
    cout << "Enter matrix" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=n; j<2*n; j++)
        {
            if(i+n == j)
                v[i][j] = 1;
            else v[i][j] = 0;
        }
    }

}


void printMat(vector< vector<double>>& v)
{
    cout << endl;

    int n = v.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n; j++)
        {
            cout.precision(3);
            cout << setw(10);
            cout << v[i][j];
        }
        cout << endl;
    }
}

void findInverse(vector< vector<double>>& aug)
{
    int n = 6;
    for(int i=0; i<n/2; i++)
    {

        for(int k=n-1; k>=i; k--) aug[i][k] = aug[i][k]/aug[i][i];

        for(int j=i+1; j<n/2; j++)
        {

            double mul = aug[j][i] / aug[i][i];
            for(int k=i; k<n; k++)
            {
                aug[j][k] = aug[j][k] - mul*aug[i][k];
            }

        }

        printMat(aug);

    }

    for(int i=2;i>0;i--){
        for(int j=i-1;j>=0;j--){
            double mul = aug[j][i] / aug[i][i];
            for(int k=0; k<n; k++)
            {
                aug[j][k] = aug[j][k] - mul*aug[i][k];
            }
        }
    }
    printMat(aug);

}


int main()
{

//    vector<string> v(3);
//    for(int i=0;i<3;i++) cin >> v[i];
//    extractNumber(v);

    int n = 3;
    vector< vector<double> > v(3, vector<double>(6));
    takeInput(v);

    printMat(v);

    findInverse(v);

    cout << " - - - Printing final matrix - - - " << endl;
    printMat(v);



    return 0;
}
