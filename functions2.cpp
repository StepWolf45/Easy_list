#include "easy_list.h"
#include <iostream>
#include <vector>

using namespace std;

void itc_rev_list(vector<int> &mass) {
  int temp;
  if(mass.size()>0){
    for (int i = 0; i <= mass.size() / 2; ++i) {
      temp = mass[i];
      mass[i] = mass[mass.size() - 1 - i];
      mass[mass.size() - 1 - i] = temp;
    }
  }
}
void itc_rev_par_list(vector<int> &mass) {
  int temp;
  if (mass.size() > 0){
    for (int i = 0; i < mass.size() - 1; i += 2) {
      temp = mass[i];
      mass[i] = mass[i + 1];
      mass[i + 1] = temp;
    }
   }
}
void itc_rshift_list(vector<int> &mass) {
  int temp;
  if (mass.size() > 0){
    int null = mass[mass.size() - 1];
    for (int i = mass.size() - 1; i > 0; --i) {
      mass[i] = mass[i - 1];
    }
    mass[0] = null;
  }
}
