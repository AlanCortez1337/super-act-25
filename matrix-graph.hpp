#include <vector>

class MatrixGraph
{
public:
    MatrixGraph(std::vector<std::vector<std::size_t>> container) : container_(container) {}

    ///////////////////////////////
    // LEVEL 1 😴
    ///////////////////////////////

    void UpdateEdgeWeight(std::size_t pointA, std::size_t pointB, std::size_t newEdgeWeight)
    {
        // ⭐TODO: given two points, go in the matrix and update the value at that spot
    }

    std::size_t GetEdgeWeight(std::size_t pointA, std::size_t pointB)
    {
        // ⭐TODO: return the edge weight in the matrix going from pointA to pointB
    }

    ///////////////////////////////
    // LEVEL 2 😳
    ///////////////////////////////

    std::vector<std::size_t> GetAdjacentPoints(std::size_t targetPoint)
    {
        // ⭐TODO: return a vector of all the indicies of the adjacent points from the targetPoint.
    }

    ///////////////////////////////
    // LEVEL 3 😐
    ///////////////////////////////

    void insertPoint(std::size_t newEdgeWeight)
    {
        // 🔥CHALLENGE TODO: update the container to add a newPoint
        // 🧠 Food for thought: think about what happens to the spots in the vector that does have that edge weight.
    }

    ///////////////////////////////
    // LEVEL 4 😡
    ///////////////////////////////

    std::vector<std::size_t> GetPath(std::size_t pointA, std::size_t pointB)
    {
        // 🔥🔥🔥MEGA CHALLENGE TODO: return a vector of the points you are visiting to get from pointA to pointB
        // 💡Hint: you might want to create a vector and push the values the path takes you.
        //  (also if there are ever two choices a path can go then just pick the first one you find.)
    }

private:
    std::vector<std::vector<std::size_t>> container_;
};