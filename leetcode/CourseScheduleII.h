#ifndef COURSESCHEDULEII_H
#define COURSESCHEDULEII_H
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
/*
https://leetcode.com/problems/course-schedule-ii/

Input: 4, [[1,0],[2,0],[3,1],[3,2]]
Output: [0,1,2,3] or [0,2,1,3]
     0
    / \
   1   2
    \ /
     3

*/
class CourseScheduleII {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> revAdj[numCourses];
        int outdegree[numCourses];
        for (int i = 0; i < numCourses; i++) {
            outdegree[i] = 0;
        }
        for (vector<int> pre : prerequisites) {
            int src = pre[1];
            int dst = pre[0];
            outdegree[src]++;
            revAdj[dst].push_back(src);
        }
        vector<int> schedule;

        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (outdegree[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            schedule.push_back(u);
            for (int v : revAdj[u]) {
                outdegree[v]--;
                if (outdegree[v] == 0) {
                    q.push(v);
                }
            }
        }
        if (schedule.size() < numCourses)
            return {};
        reverse(schedule.begin(), schedule.end());
        return schedule;
    }
};

#endif // COURSESCHEDULEII_H
