#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    Node *children[26];
    bool endNode = false;
};

class Trie
{
public:
    Node *root;

    Trie()
    {
        root = new Node();
    }

    void insert(string word)
    {

        Node *temp = root;

        for (int i = 0; i < word.size(); i++)
        {

            int childIdx = (word[i] - 'a');

            if (temp->children[childIdx] == NULL)
            {
                temp->children[childIdx] = new Node();
            }

            temp = temp->children[childIdx];
        }
        temp->endNode = true;
    }

    bool search(string word)
    {

        Node *temp = root;

        for (int i = 0; i < word.size(); i++)
        {
            int childIdx = (word[i] - 'a');
            if (temp->children[childIdx] == NULL)
            {
                return false;
            }

            temp = temp->children[childIdx];
        }
        return temp->endNode;
    }

    bool startPrefix(string pre)
    {

        Node *temp = root;

        for (int i = 0; i < pre.size(); i++)
        {
            int idx = (pre[i] - 'a');

            if (temp->children[idx] == NULL)
            {
                return false;
            }
            temp = temp->children[idx];
        }

        return true;
    }
};

int main()
{
    Trie t;

    string word = "apple";
    string pre = "apl";

    t.insert(word);

    cout << t.search(word) << " ";

    cout << endl;

    cout << t.startPrefix(pre) << " ";

    return 0;
}