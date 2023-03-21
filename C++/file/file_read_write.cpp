#include<bits/stdc++.h>

using namespace std;


class X
{
public:
    void file_write()
    {
        ofstream fout;
        fout.open("capital.txt");
        fout<<"Washington\n";
        fout<<"London\n";
        fout.close();
    }
    void file_read()
    {
        ifstream fin;
        fin.open("capital.txt");
        char line[50];
        int counter = 0;
        if(fin.fail()) {
            cout << "File not found" << endl;
            return;
        }

        string name;
        int age;
        double value;
        while(fin >> name >> age >> value)
        {
            cout << name << "\t" << age << "\t" << value << endl;
        }
        fin.close();
    }
};
int main()
{
    X ob1;
    //ob1.file_write();
    ob1.file_read();
    return 0;
}

