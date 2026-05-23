#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

const double INF = numeric_limits<double>::infinity();

struct Edge {
    int to;
    double weight;

    Edge(int t, double w) {
        to = t;
        weight = w;
    }
};

class Graph {
private:
    int vertices;
    int edges;
    vector<vector<Edge>> adj;

public:
    // Constructor
    Graph(int v) {
        vertices = v;
        edges = 0;
        adj.resize(v);
    }

    // Return number of vertices
    int V() {
        return vertices;
    }

    // Return number of edges
    int E() {
        return edges;
    }

    // Add undirected edge
    void addEdge(int u, int v, double weight) {
        adj[u].push_back(Edge(v, weight));
        adj[v].push_back(Edge(u, weight));
        edges++;
    }

    // Check adjacency
    bool adjacent(int u, int v) {
        for (Edge e : adj[u]) {
            if (e.to == v) {
                return true;
            }
        }
        return false;
    }

    // Return neighbors
    vector<Edge> neighbors(int node) {
        return adj[node];
    }

    // Generate random graph
    void generateRandomGraph(double density,
                             double minDistance,
                             double maxDistance) {

        for (int i = 0; i < vertices; i++) {

            for (int j = i + 1; j < vertices; j++) {

                double probability =
                    (double) rand() / RAND_MAX;

                if (probability < density) {

                    double weight =
                        minDistance +
                        ((double) rand() / RAND_MAX)
                        * (maxDistance - minDistance);

                    addEdge(i, j, weight);
                }
            }
        }
    }

    // Dijkstra algorithm
    vector<double> dijkstra(int start) {

        vector<double> dist(vertices, INF);

        dist[start] = 0;

        priority_queue<
            pair<double, int>,
            vector<pair<double, int>>,
            greater<pair<double, int>>
        > pq;

        pq.push({0, start});

        while (!pq.empty()) {

            double currentDistance = pq.top().first;
            int currentNode = pq.top().second;

            pq.pop();

            // Ignore outdated entries
            if (currentDistance > dist[currentNode]) {
                continue;
            }

            // Visit neighbors
            for (Edge neighbor : adj[currentNode]) {

                int nextNode = neighbor.to;
                double weight = neighbor.weight;

                if (dist[currentNode] + weight < dist[nextNode]) {

                    dist[nextNode] =
                        dist[currentNode] + weight;

                    pq.push({
                        dist[nextNode],
                        nextNode
                    });
                }
            }
        }

        return dist;
    }

    // Compute average shortest path from node 0
    double averageShortestPath() {

        vector<double> dist = dijkstra(0);

        double total = 0;
        int count = 0;

        for (int i = 1; i < vertices; i++) {

            if (dist[i] != INF) {

                total += dist[i];
                count++;
            }
        }

        if (count == 0) {
            return 0;
        }

        return total / count;
    }
};

int main() {

    srand(time(0));

    const int NUM_VERTICES = 50;
    const double MIN_DISTANCE = 1.0;
    const double MAX_DISTANCE = 10.0;

    // Density 20%
    Graph graph20(NUM_VERTICES);

    graph20.generateRandomGraph(
        0.20,
        MIN_DISTANCE,
        MAX_DISTANCE
    );

    double average20 =
        graph20.averageShortestPath();

    cout << "===================================" << endl;
    cout << "Graph Density: 20%" << endl;
    cout << "Vertices: " << graph20.V() << endl;
    cout << "Edges: " << graph20.E() << endl;
    cout << "Average Shortest Path: "
         << average20 << endl;

    // Density 40%
    Graph graph40(NUM_VERTICES);

    graph40.generateRandomGraph(
        0.40,
        MIN_DISTANCE,
        MAX_DISTANCE
    );

    double average40 =
        graph40.averageShortestPath();

    cout << "===================================" << endl;
    cout << "Graph Density: 40%" << endl;
    cout << "Vertices: " << graph40.V() << endl;
    cout << "Edges: " << graph40.E() << endl;
    cout << "Average Shortest Path: "
         << average40 << endl;

    cout << "===================================" << endl;

    return 0;
}