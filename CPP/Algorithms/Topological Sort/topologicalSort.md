# Topological Sort

A Topological sort is an ordering of the nodes in a directed graph where for each directed edge from node A to node B, node A appears before node B in the ordering.

**Note:** 
1. Topological sort is not unique.
1. Not every graph has a Topological sort. 
1. Only Directed Acyclic Graphs have a valid Topological sort.

## <ins> Algorithm

While(All nodes are not visited)
{
    
1. Nodes with zero *indegree* can be added to the output array.
1. All the nodes which are adjacent to the terminal nodes, gets their *indegree* subtracted.

}

*Indegree:* No. of incoming edges to a node in a directed graph.


