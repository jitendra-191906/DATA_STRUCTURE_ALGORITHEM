#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    // creation map
    unordered_map<string, int> m;

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
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
         it++;
    }
    return 0;
}