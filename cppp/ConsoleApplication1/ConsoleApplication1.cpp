// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

enum Status { DEAD, ALIVE };
enum ActionType { KILL, SAVE, PROPHESY };
enum Role { PROTECTOR, WEREWOLF, PROPHECY, VILLAGER, HUNTER };
class  Character {
private:
    Status status;
    Role role;
    string nickName;

    friend class ActionHandller;

};
class Moderator {
private:
    vector<string> deadNote;
    vector<Character>* Characters;
    void AnounceDeads() {
        for (auto e : deadNote) {
            cout << e << ", ";
        }
        cout << "đã bị sói cắn vào ngày hôm qua.\n";
        deadNote.clear();
    }
    friend class ActionHandller;

};
class ActionHandller {
private:
    vector<Character> Characters;

    string Remove(Character* pCrt) {
        auto it = find(Characters.begin(), Characters.end(), pCrt);
        string res;
        if (it != Characters.end()) {
            res = pCrt->nickName;
            Characters.erase(it);
        }
        return res;
    }

public:
    ActionHandller(vector<Character> cList, Moderator* moderator) : Characters(cList) {};
    void ReceiveAction(ActionType type, Character* c1, Character* c2) {
        switch (type) {
        case KILL: {

        }
        }


    }
};
class Wolf :Character {

};
class Villager :Character {

};
class Hunter :Character {

};
class Protector :Character {

};
class Prophecy :Character {

};
int main()
{
    cout << "xin chào!\n";
    cin.get();

}


