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

void itc_lshift_list(vector <int> &mass){
  if (mass.size() > 0){
    int tmp = mass[0];
    for(int i = 1; i < mass.size(); ++i){
      mass[i - 1] = mass[i];
      mass[mass.size() - 1] = tmp;
    }
  }
}

void itc_super_shift_list(vector <int> &mass, int n){
  if (mass.size() > 0){
    if(n > 0){
      for(int i = 0; i < (n % mass.size()); ++i) {
        itc_rshift_list(mass);
      }
    }else if(n < 0){
      n = -n;
      for(int i = 0; i < (n % mass.size()); ++i){
        itc_lshift_list(mass);
      }
    } 
  } 
}
