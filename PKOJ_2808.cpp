#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 定义区间结构
struct Interval {
    int start;
    int end;
};

int main() {
    int L, M;
    cin >> L >> M;

    vector<Interval> intervals;
    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        // 确保起始点小于终止点
        if (start > end) {
            swap(start, end);
        }
        intervals.push_back({ start, end });
    }

    // 按起始点升序排序
    sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
        });

    // 合并重叠区间
    vector<Interval> merged;
    if (!intervals.empty()) {
        int current_start = intervals[0].start;
        int current_end = intervals[0].end;

        for (int i = 1; i < M; i++) {
            if (intervals[i].start <= current_end) {
                // 有重叠，更新结束点
                current_end = max(current_end, intervals[i].end);
            }
            else {
                // 无重叠，添加当前合并区间
                merged.push_back({ current_start, current_end });
                current_start = intervals[i].start;
                current_end = intervals[i].end;
            }
        }
        // 添加最后一个区间
        merged.push_back({ current_start, current_end });
    }

    // 计算被移走的树的总数
    int total_removed = 0;
    for (const auto& inter : merged) {
        total_removed += (inter.end - inter.start + 1);
    }

    // 总树数为 L + 1，剩余树数为总树数减去被移走的树数
    int total_trees = L + 1;
    int remaining_trees = total_trees - total_removed;

    cout << remaining_trees << endl;

    return 0;
}