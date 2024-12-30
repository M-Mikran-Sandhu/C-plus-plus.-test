#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
intmain()
{
vector<int>vec = {hsptl.name,hsptl.room };
intsearch_element = 1;
vector<int>::iterator it;
it = find(vec.begin(), vec.end(), search_element);
if (it != vec.end())
cout<<"Patient Found";
else
cout<< "Sorry  " <<search_element<< " not found " ;
return 0;
}
