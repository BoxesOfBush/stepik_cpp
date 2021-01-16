#include <iostream>
#include <string>

enum class MonsterType{
    ORGE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

struct Monster{
    MonsterType type;
    std::string name;
    int health;
    int damage;
};

std::string getTypeOfMonster(Monster monster){
    if(monster.type == MonsterType::ORGE){
        return "ORGE";
    }
    else if(monster.type == MonsterType::GOBLIN){
        return "GOBLIN";
    }
    else if(monster.type == MonsterType::SKELETON){
        return "SKELETON";
    }
    else if(monster.type == MonsterType::ORC){
        return "ORC";
    }
    else if(monster.type == MonsterType::TROLL){
        return "TROLL";
    }
    else{
        return 0;
    }

}

void printMonster(Monster monster){
    std::cout << "This " << getTypeOfMonster(monster);
    std::cout << " is named a " << monster.name << " have a " << monster.health
              << " health and has a " << monster.damage << " damage." << std::endl;
}

int main(){
    Monster John {MonsterType::GOBLIN, "John", 170, 135};
    Monster Jane {MonsterType::ORC, "Jane", 150, 160};
    printMonster(John);
    printMonster(Jane);
}
