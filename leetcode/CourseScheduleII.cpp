#include "CourseScheduleII.h"

int main() {
    CourseScheduleII cs2;
    vector<vector<int>> preq{{0,2},{1,2},{1,0}};
    vector<int> c = cs2.findOrder(3, preq);
    cout << c.size();
    return -1;
}
