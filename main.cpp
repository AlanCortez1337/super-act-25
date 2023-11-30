#include <iostream>
#include <vector>
#include "matrix-graph.hpp"

int main()
{

    // Below we initialize a graph with essentially the following graph:
    // [0, 30, 0]
    // [10, 25, 0]
    // [0, 0, 40]

    MatrixGraph graph(
        {{0, 30, 0},
         {10, 25, 0},
         {0, 0, 40}});

    // Finding edge weight
    std::cout << "The edge weight of point 0 to point 1 is: " << graph.GetEdgeWeight(0, 1) << std::endl;
    std::cout << "The edge weight of point 1 to point 2 is: " << graph.GetEdgeWeight(1, 2) << std::endl;
    std::cout << "The edge weight of point 2 to point 2 is: " << graph.GetEdgeWeight(2, 2) << std::endl;

    std::cout << "-----------------------------" << std::endl;
    // Updating edge weight
    std::cout << "The edge weight of point 0 to point 1 BEFORE is: " << graph.GetEdgeWeight(0, 1) << std::endl;
    graph.UpdateEdgeWeight(0, 1, 100);
    std::cout << "The edge weight of point 0 to point 1 AFTER is: " << graph.GetEdgeWeight(0, 1) << std::endl;

    std::cout << "-----------------------------" << std::endl;
    // Printing adjacent neighbors
    std::vector<std::size_t> neighbors = graph.GetAdjacentPoints(2);

    std::cout << "The neighbors of point 2 are:";
    for (auto neighbor : neighbors)
    {
        std::cout << neighbor;
    }
    std::cout << std::endl;

    return 0;
}