#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    // in ordered map the value id disply in creataion order and in un  ordermap the values is randomly disply
    // creation map
    map<string, int> m;

    // inseration new key and values
    // 1
    m["jitendra"] = 2;

    // 2
    pair<string, int> p = make_pair("jitu", 4);
    m.insert(p);

    // 3
    pair<string, int> pair2("don", 4);
    m.insert(pair2);

    // search
    // 1
    cout << m["jitu"] << endl;
    
    // // 2
    cout << m.at("don") << endl;

    // // update
    m["don"] = 1;
    cout << m.at("don") << endl;
    // erase
    m.erase("don");

    // size 
    cout << m.size() << endl;
    
    //important
    cout<<m["rrr"]<<endl;
    cout<<m.at("rrr")<<endl;
    cout<<m["rrr"]<<endl;

    // // iterator
    map<string, int>::iterator it = m.begin();
    while (it != m.end())

    {
        cout<<it->first<<" "<<it->second<<endl;
         it++;
    }
    return 0;
}