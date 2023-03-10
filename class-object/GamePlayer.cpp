#include <iostream> // input/output stream (cin >>, cout <<)
#include <sstream>  // string stream ( , ss <<)
using namespace std;

// define class
class GamePlayer
{
private: // data hiding (-> Encapsulation)
    // data member, fields, attributes
    string name;
    int maxHp;
    int hp;

public:
    // member functions, methods
    GamePlayer(string name, int maxHp)
    {
        this->name = name;
        this->maxHp = maxHp;
        hp = maxHp;
    }
    void takeDamage(int damage)
    {
        if (damage > 0)
        {
            hp -= damage;
        }
        if (hp < 0)
            hp = 0;
    }

    string toString()
    {
        stringstream ss; // local variable
        ss << name << "(" << hp << "/" << maxHp << ")";
        return ss.str();
    }

    string getName()
    {
        return name;
    }

    int getMaxHp()
    {
        return maxHp;
    }

    int getHp()
    {
        return hp;
    }
};

int main()
{
    // declare instance (object)
    GamePlayer player1("pro", 100);
    GamePlayer player2("luna", 100);
    GamePlayer player3("mare", 50000);

    player1.takeDamage(10);
    player2.takeDamage(1);
    player3.takeDamage(50);
    cout << player1.toString() << endl;
    cout << player2.toString() << endl;
    cout << player3.toString() << endl;
    cout << "----------------" << endl;
    player1.takeDamage(150);
    player2.takeDamage(5);
    player3.takeDamage(100);
    cout << player1.toString() << endl;
    cout << player2.toString() << endl;
    cout << player3.toString() << endl;

    GamePlayer *monster = new GamePlayer("Rookwood", 5000);
    cout << monster->toString() << endl;

    cout << "----------------" << endl;
    GamePlayer *monsters[10];
    monsters[0] = monster;
    monsters[1] = &player2;
    monsters[2] = new GamePlayer("TU", 12000);

    for (int i = 0; i < 3; i++)
    {
        monsters[i]->takeDamage(i * 10);
        cout << "Name: " << monsters[i]->getName() << endl;
        cout << "HP: " << monsters[i]->getHp() << "/" << monsters[i]->getMaxHp() << endl;
    }

    return 0;
}