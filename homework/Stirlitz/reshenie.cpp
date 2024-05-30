
#include <iostream>
#include <fstream>
using namespace std;
#define MAX_N 100
#define INF 1000

int graph[MAX_N][MAX_N];
int path[MAX_N];
int dist[MAX_N];
bool visited[MAX_N];

void dijkstra(int n, int start) {
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = false;
    }
    dist[start] = 0;

    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && (v == -1 || dist[j] < dist[v])) {
                v = j;
            }
        }

        if (dist[v] == INF) {
            break;
        }

        visited[v] = true;

        for (int to = 0; to < n; to++) {
            if (graph[v][to] != INF) {
                int cost = graph[v][to];
                if (dist[v] + cost < dist[to]) {
                    dist[to] = dist[v] + cost;
                    path[to] = v;
                }
            }
        }
    }
}

void printPath(int end, ofstream& outputFile) {
    if (dist[end] == INF) {
        outputFile << "No path found\n";
        return;
    }

    int cur = end;
    while (cur != 0) {
        outputFile << cur + 1 << " <- ";
        cur = path[cur];
    }
    outputFile << "1\n";
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int n;
    inputFile >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inputFile >> graph[i][j];
            if (graph[i][j] == 0) {
                graph[i][j] = INF;
            }
        }
    }

    int minCycleDistance = INF;

    for (int i = 0; i < n; i++) {
        dijkstra(n, i);
        for (int j = 0; j < n; j++) {
            if (i != j && graph[j][i] != INF) {
                int cycleDistance = dist[j] + graph[j][i];
                if (cycleDistance < minCycleDistance) {
                    minCycleDistance = cycleDistance;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int cycleDistance = dist[i] + graph[i][j] + dist[j];
                if (cycleDistance < minCycleDistance) {
                    minCycleDistance = cycleDistance;
                }
            }
        }
    }

    outputFile << minCycleDistance << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}