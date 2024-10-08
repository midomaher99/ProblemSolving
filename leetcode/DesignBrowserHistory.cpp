#include <iostream>
#include <string>
#include <vector>
using namespace std;
class HistoryNode
{

public:
    HistoryNode *prev;
    string val;
    HistoryNode *next;

    HistoryNode(HistoryNode *prev,
                string val,
                HistoryNode *next) : prev(prev), val(val), next(next) {}
};

class BrowserHistory
{
private:
    HistoryNode *start;
    HistoryNode *current;
    void deleteNode(HistoryNode *node)
    {
        if (node->next == nullptr)
            delete node;
        else
            deleteNode(node->next);
    }

public:
    BrowserHistory(string homepage)
    {
        start = new HistoryNode(nullptr, homepage, nullptr);
        current = start;
    }

    void visit(string url)
    {
        HistoryNode *ptr = current->next;
        current->next = new HistoryNode(current, url, nullptr);
        current = current->next;
        if (ptr != nullptr)
        {
            deleteNode(ptr);
        }
    }

    string back(int steps)
    {
        HistoryNode *ptr = current;
        for (int i = 0; i < steps; i++)
        {
            if (current->prev == nullptr)
                break;
            else
                current = current->prev;
        }
        return current->val;
    }

    string forward(int steps)
    {
        HistoryNode *ptr = current;
        for (int i = 0; i < steps; i++)
        {
            if (current->next == nullptr)
                break;
            else
                current = current->next;
        }
        return current->val;
    }
};

/**********Vector Solution**********/

class BrowserHistory
{
private:
    int currIndex;
    vector<string> history;

public:
    BrowserHistory(string homepage)
    {
        history.push_back(homepage);
        currIndex = 0;
    }

    void visit(string url)
    {
        history.erase(history.begin() + currIndex + 1, history.end());
        history.push_back(url);
        currIndex += 1;
    }

    string back(int steps)
    {
        int i;
        for (i = 0; i < steps && history.begin() + (currIndex - i) != history.begin(); i++)
            ;
        currIndex -= i;
        return history[currIndex];
    }

    string forward(int steps)
    {
        int i;
        for (i = 0; i < steps && history.begin() + (currIndex + i) != history.end() - 1; i++)
            ;
        currIndex += i;
        return history[currIndex];
    }
};