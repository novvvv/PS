#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> tree_structure_info[10];
int tree_visit_info[1025];

void inorder_traversal(int depth, int start, int end) {
    if (start >= end) return;
    int mid = (start + end) / 2;
    inorder_traversal(depth+1, start, mid); // 좌측 자식 트리
    tree_structure_info[depth].push_back(tree_visit_info[mid]); // 가운데 노드
    inorder_traversal(depth+1, mid+1, end); // 우측 자식 트리
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k; // tree depth
    cin >> k;
    int node_num = pow(2, k) - 1;
    
    for (int i = 0; i < node_num; i++) {
        cin >> tree_visit_info[i];
    }
    
    inorder_traversal(0, 0, node_num);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < tree_structure_info[i].size(); j++) {
            cout << tree_structure_info[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}
