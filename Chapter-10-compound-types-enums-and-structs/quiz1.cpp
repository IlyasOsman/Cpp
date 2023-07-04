#include <iostream>


struct Ads 
{
    int numberOfAdsShown {};
    double percentageClicked {};
    double earnedAmountPerClick {};
};

// funtion to gets info from users

Ads getAdvertising() 
{
    // Defining new temp struct
    Ads temp;
    
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.numberOfAdsShown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.percentageClicked;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.earnedAmountPerClick;

    return temp;
}

//Function prints user input and calculated earned mount
void printAds (const Ads& ad)
{
    std::cout << "Number of ads shown :" << ad.numberOfAdsShown << '\n';
    std::cout << "Percentage of adds clicked by user: " << '\n';
    std::cout << "Amount earned: " << ad.earnedAmountPerClick << '\n';

    std::cout << "Total Earnings: $" << (ad.numberOfAdsShown * ad.percentageClicked / 100 * ad.earnedAmountPerClick) << '\n';

}



int main()
{
    // Declaring new struct

    Ads advertising { getAdvertising() };

    printAds(advertising);

    return 0;
}