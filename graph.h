#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <iostream>
#include <vector>

class Node {
    private:
    int value;
    std::vector<int> adj;
    
    public:
    /**
     * @brief Construct a new Node object
     * 
     * @param val 
     * @param adj 
     */
    Node(int val, std::vector<int> adj) {
        value = val;
        for(int i = 0; i < adj.size(); i++) {
            this->adj.push_back(adj.at(i));
        }
    }

    /**
     * @brief This method verifies if a vertex has even valency (in other words, this method verifies if a vertex is connected
     * to an even number of other vertices).
     * 
     * @return true 
     * @return false 
     */
    bool evenVertex() {
        return adj.size()%2 == 0;
    }

    /* Add any other useful method */
};

class Graph {
	private:
		std::vector<Node>* vect;
	
	public:
		/**
		* @brief Construct a new Graph object
		* 
		* @param size 
		*/
		explicit Graph() {
		    vect = new std::vector<Node>();
		}
		
		Graph(const Graph& g) {
			vect = new std::vector<Node>(g.vect->size());
			for(int i = 0; i < vect->size(); i++) {
				vect->at(i) = g.vect->at(i);
			}
		}
		
        ~Graph() {
            delete[] vect;
        }
        
		int oddVertNum();
		bool eulerianGraph();
		bool eulerianPath();
		
		/* Add any other useful method */
};

#endif
