//
// Created by akbar on 8/9/2021.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

struct Node {
    int mEnemies = 0;
    bool mIsVisited = false;

    // use this because we only need the neighbor reference
    // without reference_wrapper we will copy the value which is bad
    // for kehidupan, karena setiap kita visit node, kita merubah value
    // mIsVisited, jadi kalo mNextnya copy value, variable mIsVisited akan
    // useless
    // GEGARA INI DEBUGGING SEJAM
    vector<reference_wrapper<Node>> mNext;

    // https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
    explicit Node(int enemies) : mEnemies(enemies) {}

    void visitNeighborAndCountTotalEnemies(int &total) {
        if (mIsVisited)
            return;

        // only work using reference_wrapper
        // bisa diakalin dengan buat array baru
        // untuk nyimpan apakah udah di visit apa belom
        // (boros memori)
        mIsVisited = true;
        total += mEnemies;

        for (Node &i : mNext)
            i.visitNeighborAndCountTotalEnemies(total);
    }
};

/**
 * Count all enemies in all connected nodes
 * @param nodes
 * @return totalEnemies in every connected nodes
 */
vector<int> countTotalEnemies(vector<Node> &nodes) {
    vector<int> totalEnemies{};
    for (Node &node : nodes) {
        if (node.mIsVisited)
            continue;

        int total = 0;
        node.visitNeighborAndCountTotalEnemies(total);
        totalEnemies.push_back(total);
    }
    return totalEnemies;
}


vector<Node> input() {
    vector<Node> nodes;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int enemy;
        cin >> enemy;
        nodes.emplace_back(enemy);
    }

    for (int i = 0; i < m; i++) {
        int origin, dest;
        cin >> origin >> dest;
        Node &originNode = nodes[origin - 1];
        Node &destNode = nodes[dest - 1];
        originNode.mNext.emplace_back(destNode);
    }

    return nodes;
}

int main() {
    vector<Node> nodes = input();

    vector<int> totalEnemies = countTotalEnemies(nodes);
    // di sort supaya hasilnya optimal (baca soal)
    sort(totalEnemies.begin(), totalEnemies.end(), greater<>());

    int totalTeleport = 1;
    int totalPower = 0;
    for (int &enemies : totalEnemies) {
        totalPower += enemies * totalTeleport++;
    }
    cout << totalPower << endl;
    return 0;
}