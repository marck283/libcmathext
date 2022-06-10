#include "graph.h"

/**
 * @brief This function finds how many vertices have an odd degree in the given graph.
 * 
 * @return int 
 */
int Graph::oddVertNum() {
    int oddCounter = 0;

    for(int i = 0; i < vect->size(); i++) {
        if(vect->at(i).evenVertex() == false) {
            oddCounter++;
        }
    }

    return oddCounter;
}

/**
 * @brief This function finds if the given graph is a Eulerian graph. To do so, it uses the fact that a Eulerian graph
 * must have exactly no vertices with an odd degree (that is, no vertices in the given graph can have an odd degree
 * for the graph to be Eulerian).
 * 
 * @param graph 
 * @return bool 
 */
bool Graph::eulerianGraph() {
    if(oddVertNum() == 0) {
        return true;
    }
    return false;
}

/**
 * @brief This function finds if the given graph is a Eulerian path. To do so, it uses the fact that a Eulerian path
 * can have at most two vertices with an odd degree.
 * 
 * @param graph 
 * @return bool 
 */
bool Graph::eulerianPath() {
    if(oddVertNum() <= 2) {
        return true;
    }
    return false;
}