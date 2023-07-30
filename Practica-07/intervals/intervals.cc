/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file intervals.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that, given two intervals, computes 
  * the interval corresponding to their intersection, or tells that it is empty..
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51126
*/
#include<iostream>
#include<algorithm>

void Mensaje() {
  std::cout << "It is a program that, given two intervals, computes "
  << " the interval corresponding to their intersection, or tells that it is empty..";
}

class interval{
   public:
      int left, right;
};
void findIntersection(interval intervals[], int amount_of_numbers) {
  int left_side = intervals[0].left;
  int right_side = intervals[0].right;
  for (int i = 1; i < amount_of_numbers; i++) {
    if (intervals[i].left > right_side || intervals[i].right < left_side) {
      std::cout << "[]" << "\n";
        return;
    } else {
      left_side = std::max(left_side, intervals[i].left);
      right_side = std::min(right_side, intervals[i].right);
    }
  }
  std::cout << "[" << left_side << "," << right_side << "]" << "\n";
}
int main() {
  // Mensaje();
  int menor1,mayor1,menor2,mayor2;
  std::cin >> menor1; std::cin >> menor2;std::cin >> mayor1;std::cin >> mayor2;
  interval intervals[] = {{ menor1, menor2 }, { mayor1, mayor2 }};
  int amount_of_numbers = sizeof(intervals) / sizeof(intervals[0]);
  findIntersection(intervals, amount_of_numbers);
}