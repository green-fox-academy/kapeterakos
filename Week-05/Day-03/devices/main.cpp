#include <iostream>
#include "Printer3D.h"
#include "Copier.h"
#include <vector>
#include "Scanner.h"
int main() {
   std::vector<Printer*>Objects;

   Printer2D p1(3,4);
   Printer2D p2(2,5);
   Printer2D p3(1,6);
   Printer3D p4(1,2,3);
   Printer3D p5(2,3,4);
   Copier p6(3,4,2);

    Objects.push_back(&p1);
    Objects.push_back(&p2);
    Objects.push_back(&p3);
    Objects.push_back(&p4);
    Objects.push_back(&p5);
    Objects.push_back(&p6);
    for (int i = 0; i < Objects.size(); ++i) {
        Objects[i]->print();
        i++;
    }

  //  std::vector<Scanner>Objects2;
  //  Objects2.emplace_back(2);
   // Objects2.emplace_back(3);
   // Objects2.push_back(Copier(3,2,1));
   // Objects2.push_back(Copier(4,3,2));
   // for (int j = 0; j < Objects2.size(); ++j) {
    //    Objects2[j].scan();
    //    j++;

  //  }
    return 0;
}