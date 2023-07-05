#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pomodoro {
    private:
        string task;
        int pomodoro;
    public:
        Pomodoro(string task) {
            this->task = task;
            this->pomodoro = 0;
        }
        void start() {
            pomodoro++;
        }
        string getTask() {
            return task;
        }
        int getPomodoro() {
            return pomodoro;
        }
        string toString() {
            stringstream ss;
            ss << task << " " << pomodoro;
            return ss.str();
        }
};
class TodoList{
    private:
        int totalTasks;
        Pomodoro pomodoro[31];
    public:
        TodoList(){
            this->totalTasks = 0;
        }
        void add(string task){
            int newTask = 1;
            for (int i = 0; i < 30; i++)
            {
                if(pomodoro[i].getTask() == task){
                    pomodoro[i] = Pomodoro(task);
                    pomodoro[i].start();
                    newTask = 0;
                    break;
                }
            }
            if(newTask){
                pomodoro[totalTasks] = Pomodoro(task);
                pomodoro[totalTasks].start();
                totalTasks++;
            }
        }
        string toString(){
            stringstream ss;
            for (int i = 0; i < totalTasks; i++)
            {
                ss << pomodoro[i].toString() << endl;
            }
            return ss.str();
        } 
};
int main() {
    Pomodoro p("Study");
    p.start();
    p.start();
    cout << p.toString() << endl;
}