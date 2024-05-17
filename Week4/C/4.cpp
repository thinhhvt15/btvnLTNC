#include <iostream>

using namespace std;

const int dr[] = {-1, 0, 1, 0, 1, -1, 1, -1};
const int dc[] = {0, 1, 0, -1, 1, -1, -1, 1};

int res[105][105];

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n + 2][m + 2];

    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            res[i][j] = '*';
            if (a[i][j] == '*') continue;

            int cur = 0;
            for (int d = 0; d < 8; d++) {
                int new_r = i + dr[d], new_c = j + dc[d];
                if (a[new_r][new_c] == '*') cur++;
            }

            res[i][j] = cur;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) 
            if (res[i][j] == '*') cout << "* ";
            else
                cout << res[i][j] << " ";
        cout << "\n";
    }
}