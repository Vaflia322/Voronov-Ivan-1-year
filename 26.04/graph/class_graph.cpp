#include <iostream>
#include <queue>

using namespace std;

class Graph {
private:
	int amount_vertex;
	int** adjacency_matrix;
public:
	Graph(){}
	Graph(int amount_vertex, int** adjacency_matrix) {
		amount_vertex = this->amount_vertex;
		adjacency_matrix = this->adjacency_matrix;
		cout << "graph generate" << endl;
	}
	void append_vertex(int place, int* array_line_in, int* array_line_out) {
		int** temp_matrix = new int* [amount_vertex + 1];
		for (int i = 0; i < (amount_vertex + 1); i++) {
			adjacency_matrix[i] = new int[amount_vertex + 1];
		}
		for (int i = 0; i < (amount_vertex + 1); i++) {
			for (int k = 0; k < (amount_vertex + 1); k++) {
				if (i == place) {
					temp_matrix[i][k] = array_line_in[k];
				}
				else if (k == place) {
					temp_matrix[i][k] = array_line_out[i];
				}
				else {
					if (i > place) {
						temp_matrix[i][k] = adjacency_matrix[i - 1][k];
					}
					else if (k > place) {
						temp_matrix[i][k] = adjacency_matrix[i][k - 1];
					}
					else if (k > place and i > place) {
						temp_matrix[i][k] = adjacency_matrix[i - 1][k - 1];
					}
					else {
						temp_matrix[i][k] = adjacency_matrix[i][k];
					}
				}
			}
		}
		amount_vertex++;
		delete[] adjacency_matrix;
		adjacency_matrix = temp_matrix;
	}
	void append_line(int in, int out, int length) {
		adjacency_matrix[in][out] = length;
	}
	void delete_vertex(int place) {
		int** temp_matrix = new int* [amount_vertex + 1];
		for (int i = 0; i < (amount_vertex - 1); i++) {
			adjacency_matrix[i] = new int[amount_vertex + 1];
		}
		for (int i = 0; i < (amount_vertex - 1); i++) {
			for (int k = 0; k < (amount_vertex - 1); k++) {
				if (i < place and k< place) {
					temp_matrix[i][k] = adjacency_matrix[i][k];
				}
				else if (i > place) {
					temp_matrix[i][k] = adjacency_matrix[i+1][k];
				}
				else if (k > place) {
					temp_matrix[i][k] = adjacency_matrix[i][k+1];
				}
				else if (k > place and i > place) {
					temp_matrix[i][k] = adjacency_matrix[i+1][k+1];
				}
			}
		}
	}
	void delete_line(int in, int out) {
		adjacency_matrix[in][out] = 0;
	}
	int* return_length(int place) {
		int* length = new int[amount_vertex];
		for (int i = 0; i < amount_vertex; i++) {
			length[i] = 0;
		}
		queue<int> que;
		bool* used = new bool[amount_vertex];
		que.push(place);
		used[place] = true;
		while (!que.empty()) {
			int current = que.front();
			que.pop();
			for (int i = 0; i < amount_vertex; i++) {
				int temp = adjacency_matrix[current][i];
				if (!used[i]) {
					que.push(i);
					used[i] = true;
					length[i] = length[current] + temp;
				}
			}
		}
		return length;
	}
	void print_matrix() {
		for (int i = 0; i < amount_vertex;i++) {
			for (int k = 0; k < amount_vertex;k++) {
				cout << adjacency_matrix[i][k]<<' ';
			}
			cout << endl;
		}
	}
};

int main() {
	int n; cin >> n;
	int** array = new int* [n];
	for (int i = 0; i < n;i++) {
		array[i] = new int[n];
	}

	for (int i = 0; i < n;i++) {
		for (int k = 0; k < n; k++) {
			cin >> array[i][k];
		}
	}
	Graph graph{n,array};
	graph.print_matrix();
}