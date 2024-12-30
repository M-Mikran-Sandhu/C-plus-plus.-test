#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
intmain()
{
// Initializing the vector elements
vector<int>vec = { 100, 200, 300, 400, 500, 600, 700 };
//Inputting the element to be searched in vector
intsearch_element = 500;
//creating an iterator ‘it’ to store the result
vector<int>::iterator it;
//using the find() function and storing the result in iterator ‘it’
it = find(vec.begin(), vec.end(), search_element);
//checking the condition based on the ‘it’ result whether the element is present or not
if (it != vec.end())
cout<< "Congratulations!!! element " <<search_element<< " is present in Vector ";
else
cout<< "Sorry the element " <<search_element<< " is not present in Vector" ;
return 0;
}
