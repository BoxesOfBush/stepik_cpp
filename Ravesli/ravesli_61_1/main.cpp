#include <iostream>

struct Advertising{
    int adsShown;
    double clickThroughRatePercent;
    double averageEarningsPerClick;
};

void printAdvertising(Advertising ad){
    std::cout << "Number of ads shown: " << ad.adsShown << "\n";
    std::cout << "Click through rate " << ad.clickThroughRatePercent << "\n";
    std::cout << "Average earnings per click: $ " << ad.averageEarningsPerClick << "\n";

    std::cout << "Total Earnings: $ "<<
                 (ad.adsShown * ad.clickThroughRatePercent/100 * ad.averageEarningsPerClick) << std::endl;
}

int main(){
    Advertising ad;
    std::cout << "How many ads were shown today? ";
    std::cin >> ad.adsShown;
    std::cout << "What percent of users clicked on the ads? ";
    std::cin >> ad.clickThroughRatePercent;
    std::cout << "What was the average earnings per click? ";
    std::cin >> ad.averageEarningsPerClick;

    printAdvertising(ad);
}
