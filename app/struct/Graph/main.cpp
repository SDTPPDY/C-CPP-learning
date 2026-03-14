#include <iostream>
using namespace std;

#define inf -1

class graph {
  private:
    int vertices;
    int** edges;

  public:
    graph(int vertices) {
        this->vertices = vertices;
        edges = new int*[vertices];
        for (int i = 0; i < vertices; i++) {
            edges[i] = new int[vertices];
            for (int j = 0; j < vertices; j++) {
                edges[i][j] = inf;
            }
        }
    }
    ~graph() {
        for (int i = 0; i < vertices; i++) {
            delete[] edges[i];
        }
        delete[] edges;
    }
    void addEdge(int u, int v, int w) {
        edges[u][v] = w;
    }
    void printGraph() {
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << edges[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices = 5;
    graph gph(vertices);

    gph.addEdge(0, 1, 1);
    gph.addEdge(0, 2, 3);
    gph.addEdge(2, 3, 7);
    gph.addEdge(3, 4, 9);
    gph.addEdge(4, 0, 4);
    gph.addEdge(4, 2, 5);

    gph.printGraph();
}