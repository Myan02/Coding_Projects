#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec);
void PrintVector(vector<int> myVec);

int main() 
{
    vector<int> list;
    int userValue;
    unsigned int listLength;
    unsigned int i;

    cin >> listLength;

    for (i = 0; i < listLength; i++)
    {
        cin >> userValue;
        list.push_back(userValue);
    }

    SortVector(list);
    PrintVector(list);

    return 0;
}

//sorts a vector in DESCENDING order
void SortVector(vector<int>& myVec)
{
    int length = myVec.size();
    int i, j;
    int key;

    for (i = 1; i < length; i++)
    {
        key = myVec.at(i);
        j = i - 1;

        while ((j >= 0) && (myVec.at(j) < key))
        {
            myVec.at(j + 1) = myVec.at(j);
            j = j - 1;
        }
        
        myVec.at(j + 1) = key;
    }
}

void PrintVector(vector<int> myVec)
{
    unsigned int length = myVec.size();
    unsigned int i;

    for (i = 0; i < length; i++)
    {
        cout << myVec.at(i) << ", ";
    }

    cout << endl;
}
