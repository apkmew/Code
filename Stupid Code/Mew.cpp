// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

// Stores the vertices
int store[MAX], n;

// Graph
int graph[MAX][MAX];

// Degree of the vertices
int d[MAX];

// Function to check if the given set of
// vertices in store array is a clique or not
bool is_clique(int b)
{

	// Run a loop for all set of edges
	for (int i = 1; i < b; i++) {
		for (int j = i + 1; j < b; j++)

			// If any edge is missing
			if (graph[store[i]][store[j]] == 0)
				return false;
	}
	return true;
}

// Function to find all the sizes
// of maximal cliques
int maxCliques(int i, int l)
{
	// Maximal clique size
	int max_ = 0;

	// Check if any vertices from i+1
	// can be inserted
	for (int j = i + 1; j <= n; j++) {

		// Add the vertex to store
		store[l] = j;

		// If the graph is not a clique of size k then
		// it cannot be a clique by adding another edge
		if (is_clique(l + 1)) {

			// Update max
			max_ = max(max_, l);

			// Check if another edge can be added
			max_ = max(max_, maxCliques(j, l + 1));
		}
	}
	return max_;
}

// Driver code
int main()
{
	int edges[][2] = { { 1, 2 }, { 1, 3 }, { 1, 4 },
					{ 2, 4 }, { 3, 5 }, { 3, 6 }, 
                    { 3, 7 }, { 4, 5 }, { 4, 6 },
                    { 5, 6 }, { 5, 7 }, { 6, 7 }  };
	int size = sizeof(edges) / sizeof(edges[0]);
	n = 7;

	for (int i = 0; i < size; i++) {
		graph[edges[i][0]][edges[i][1]] = 1;
		graph[edges[i][1]][edges[i][0]] = 1;
		//d[edges[i][0]]++;
		//d[edges[i][1]]++;
	}

	cout << maxCliques(0, 1);

	return 0;
}
