#include <iostream>

enum ItemTypes
{
    ITEM_HEALTH_POTION,
    ITEM_TORCH,
    ITEM_ARROW,
    MAX_ITEMS
};

int countTotalItems(int *items){
    int total_score = 0;
    for(int i = 0; i < MAX_ITEMS; ++i){
        total_score += items[i];
    }
    return total_score;

}

int main(){
    int items[MAX_ITEMS] {3, 6, 12};

    std::cout << "Player has " << countTotalItems(items) << " items" << "\n";
}
