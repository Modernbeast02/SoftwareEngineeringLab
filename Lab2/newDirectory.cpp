#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> mp;

int main()
{
    while (true)
    {
        int q;
        cout << "Input your operation: ('1' to create new contact, '2' to update existing contact, '3' for searching a contact, '4' for deleting a contact, '5' to close application, '6' for prefix searching)" << endl;
        cin >> q;
        if (q == 1)
        { // creating contact
            string name, phone;
            cout << "Enter contact name: " << endl;
            cin >> name;
            cout << "Enter contact number: " << endl;
            cin >> phone;
            mp[name].push_back(phone);
        }
        else if (q == 2)
        { // updating contact
            string name, oldPhone, newPhone;
            cout << "Enter contact name: " << endl;
            cin >> name;
            cout << "Enter old contact number: " << endl;
            cin >> oldPhone;
            cout << "Enter new contact number: " << endl;
            cin >> newPhone;
            for (int i = 0; i < mp[name].size(); i++)
            {
                if (mp[name][i] == oldPhone)
                {
                    mp[name][i] = newPhone;
                }
            }
        }
        else if (q == 3)
        { // searching contact
            string name;
            cout << "Enter contact name: " << endl;
            cin >> name;
            cout << "Phone numbers of " << name << " are: " << endl;
            for (int i = 0; i < mp[name].size(); i++)
            {
                cout << mp[name][i] << endl;
            }
        }
        else if (q == 4)
        { // deleting contact
            string name;
            cout << "Enter contact name: " << endl;
            cin >> name;
            mp.erase(name);
        }
        else if (q == 5)
        { // closing application
            break;
        }
        else if (q == 6)
        { // prefix searching for names
            string name;
            cout << "Enter contact name: " << endl;
            cin >> name;
            int n = name.size();
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                string s = it->first;
                int x = s.size();
                if (x >= n && s.substr(0, n) == name)
                {
                    cout << s << endl;
                }
            }
        }
    }
    return 0;
}
