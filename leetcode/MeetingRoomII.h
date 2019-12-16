#ifndef MEETINGROOMII_H
#define MEETINGROOMII_H
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;
/*
https://leetcode.com/problems/meeting-rooms-ii/

Example 1:

Input: [[0, 30],[5, 10],[15, 20]]
Output: 2
Example 2:

Input: [[7,10],[2,4]]
Output: 1
*/

class MeetingRoomII {

public:
    struct Interval {
        int begin, end;
        Interval(int begin, int end) : begin(begin), end(end) {}
    };

    struct Compare {
        bool operator() (Interval i0, Interval i1) {
            return true;
        }
    };

    static bool compareInterval(Interval i1, Interval i2) {
        return (i1.begin < i2.begin);
    }

    int minMeetingRooms(vector<vector<int>>& intervals) {
        if (intervals.size() == 0)
            return 0;
        vector<Interval> meetings;
        for(vector<int> in : intervals) {
            Interval intl(in[0], in[1]);
            meetings.push_back(intl);
        }
        sort(meetings.begin(), meetings.end(), compareInterval);

        priority_queue<int, vector<int>, greater<int>> pq; // MIN HEAP declaration
//        priority_queue <int> pq;  //MAX HEAP declaration
//        priority_queue<Interval, vector<Interval>, Compare> pq1;

        pq.push(meetings[0].end);
        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i].begin >= pq.top()) {
                pq.pop();
            }
            pq.push(meetings[i].end);
        }
        return pq.size();
    }
};

#endif // MEETINGROOMII_H
