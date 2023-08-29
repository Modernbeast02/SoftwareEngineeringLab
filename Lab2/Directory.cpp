#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

class directory
{
public:
    unordered_map<string, vector<string>> numbers;

    void setdata(string phone, string name)
    {
        if (numbers.find(name) == numbers.end())
        {
            numbers[name].push_back(phone);
        }
        else
        {
            update(name, phone, phone);
        }
    }

    void getPhone(string s)
    {
        for (int i = 0; i < numbers[s].size(); i++)
        {
            cout << numbers[s][i] << endl;
        }
    }
    void update(string name, string old, string newC)
    {
        if (numbers.find(name) == numbers.end())
        {
            numbers[name].push_back(newC);
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < numbers[name].size(); i++)
            {
                if (numbers[name][i] == old)
                {
                    numbers[name][i] = newC;
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                numbers[name].push_back(newC);
            }
        }
    }

    bool exists(string name)
    {
        return numbers.find(name) != numbers.end();
    }

    void deleteEntry(string name)
    {
        if (exists(name))
        {
            numbers.erase(name);
        }
    }
    void printDirectory()
    {
        for (auto it : numbers)
        {
            cout << it.first << " ";
            for (auto phone : it.second)
            {
                cout << phone << " ";
            }
            cout << endl;
        }
    }
};
void solve()
{
    directory o1;
    o1.setdata("1234", "chirag");
    o1.setdata("3422", "harry");
    o1.setdata("1499", "kartik");
    o1.getPhone("chirag");
    o1.getPhone("harry");
    cout << o1.exists("chirag") << endl;
    o1.deleteEntry("chirag");
    cout << o1.exists("chirag");
    cout << endl;
    o1.printDirectory();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
