#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <string>
#include <iostream>
#define NAMESIZE 4
using namespace std;
class Animal
{
protected:
    string name;
    int age;
    // string voice_action;
    // string food_action;
    // string move_action;
public:
    Animal(string namea, int agea) : name(namea), age(agea) {}
    // virtual void shout() = 0; // 发出叫声
    // virtual void eat() = 0;   // 进食行为
    // virtual void move() = 0;  // 移动行为

    virtual ~Animal() {}
};

class Aniaml_action: public Animal
{
protected:
     string voice_action;
    string food_action;
    string move_action;

public:
    Aniaml_action(string nameb,string vioceb,string foodb,string moveb,int ageb) : Animal(nameb, ageb), \
     food_action(foodb),move_action(moveb),voice_action(vioceb) {}
     void show(void);
};
#endif
