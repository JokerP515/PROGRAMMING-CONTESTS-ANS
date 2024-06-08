#include <iostream>
#include <vector>

using namespace std;

int count_cycles(int& n, const vector<int>& arr, vector<bool>& visited) {
    int cycles = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            ++cycles;
            int x = i;
            while (!visited[x]) {
                visited[x] = true;
                x = arr[x] - 1; // Ajustar a índice basado en 0
            }
        }
    }
    return cycles;
}

int minimum_swaps(int& n, const vector<int>& right_shoes, const vector<int>& left_shoes) {
    vector<bool> visited(n, false);
    
    // Contar ciclos en right_shoes
    int right_cycles = count_cycles(n, right_shoes, visited);

    // Resetear el vector visited para el siguiente uso
    fill(visited.begin(), visited.end(), false);

    // Contar ciclos en left_shoes
    int left_cycles = count_cycles(n, left_shoes, visited);

    // El número mínimo de intercambios es (n - número de ciclos)
    return (n - right_cycles) + (n - left_cycles);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n>=1){
        vector<int> right_shoes(n);
        vector<int> left_shoes(n);

        for (int i = 0; i < n; ++i) {
            cin >> right_shoes[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> left_shoes[i];
        }

        cout << minimum_swaps(n, right_shoes, left_shoes) << endl;
    }

    return 0;
}
