#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

int GetWordFrequency(vector<string> wordsList, string currWord);
void PrintFrequency(vector<string> wordsList);

int main() 
{
    vector<string> wordsList;
    string currWord;
    unsigned int listLength;
    unsigned int i;

    cin >> listLength;
    for (i = 0; i < listLength; i++)
    {
        cin >> currWord;
        wordsList.push_back(currWord);
    }

    PrintFrequency(wordsList);

    return 0;
}

void PrintFrequency(vector<string> wordsList)
{
    string currWord;
    unsigned int listLength = wordsList.size();
    unsigned int frequency;
    unsigned int i;

    for (i = 0; i < listLength; i++)
    {
        currWord = wordsList.at(i);
        frequency = GetWordFrequency(wordsList, currWord);
        cout << currWord << " " << frequency << endl;
    }
}

int GetWordFrequency(vector<string> wordsList, string currWord)
{
    unsigned int listLength = wordsList.size();
    unsigned int i;
    int frequency = 0;

    for (i = 0; i < listLength; i++)
    {
        wordsList.at(i).at(0) = tolower(wordsList.at(i).at(0));
    }

    currWord.at(0) = tolower(currWord.at(0));

    for (i = 0; i < listLength; i++)
    {
        if (wordsList.at(i) == currWord)
        {
            frequency++;
        }
    }

    return frequency;
}