#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ��������ṹ
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
        // ȷ����ʼ��С����ֹ��
        if (start > end) {
            swap(start, end);
        }
        intervals.push_back({ start, end });
    }

    // ����ʼ����������
    sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
        });

    // �ϲ��ص�����
    vector<Interval> merged;
    if (!intervals.empty()) {
        int current_start = intervals[0].start;
        int current_end = intervals[0].end;

        for (int i = 1; i < M; i++) {
            if (intervals[i].start <= current_end) {
                // ���ص������½�����
                current_end = max(current_end, intervals[i].end);
            }
            else {
                // ���ص�����ӵ�ǰ�ϲ�����
                merged.push_back({ current_start, current_end });
                current_start = intervals[i].start;
                current_end = intervals[i].end;
            }
        }
        // ������һ������
        merged.push_back({ current_start, current_end });
    }

    // ���㱻���ߵ���������
    int total_removed = 0;
    for (const auto& inter : merged) {
        total_removed += (inter.end - inter.start + 1);
    }

    // ������Ϊ L + 1��ʣ������Ϊ��������ȥ�����ߵ�����
    int total_trees = L + 1;
    int remaining_trees = total_trees - total_removed;

    cout << remaining_trees << endl;

    return 0;
}