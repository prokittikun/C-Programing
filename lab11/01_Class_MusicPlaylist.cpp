#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
    private:
        string name[21];
        int currentTrack;
        int count;
    public:
        MusicPlaylist(){
            this->count = 1;
        }
        void add(string name){
            this->name[count] = name;
            this->count += 1;
        }

        void setCurrentTrack(int i){
            currentTrack = i;
        }

        string play(){
            return this->name[currentTrack];
        }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}