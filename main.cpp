#include "money.h"
#include <functional>
#include <numeric>
#include <vector>
//---Git Commands---
//git pull origin master -first to get updated work changes
//git push origin master -so partner can see
//git log 
Money m;
std::vector <int> deposits;
auto sum_deposits = std::accumulate(deposits.begin(), deposits.end(),m);
