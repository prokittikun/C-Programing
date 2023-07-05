#include <iostream>
using namespace std;

typedef struct Word_
{
    string word;
    int count;
} Word;

int main()
{
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true)
    {
        cin >> input;
        if (input == "exit")
        {
            break;
        }
        find = 0;

        for (int j = 0; j < last_word; j++)
        {
            if (data[j].word == input)
            {
                data[j].word = input;
                data[j].count++;
                find = 1;
                break;
            }
        }
        if (find == 0)
        {
            data[last_word].word = input;
            data[last_word].count = 1;
            last_word++;
        }

        // for (int k = 0; k < last_word && last_word != 0; k++)
        // {
        //     if (data[k].word == input)
        //     {
        //         find = 1;
        //         data[k].count++;
        //         last_word++;
        //         i -= 1;
        //         break;
        //     }
        // }
        // if (find == 0)
        // {
        //     data[last_word].word = input;
        //     data[last_word].count = 1;
        //     last_word++;
        // }
        // i++;
    }

    cout << "Output:" << endl;
    for (i = 0; i < last_word; i++)
    {
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}