# Graph
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Graph/1.%20Steps%20by%20Knight.cpp">Steps by Knight</a></b>     Application:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/18.%20Shortest%20path%20in%20matrix.cpp">Shortest Path in matrix</a></b>   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/23.%20Rotten%20Oranges.cpp">Rotten Oranges</a></b>   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/27.%20Min%20Cost%20Path.cpp">Minimum cost path</a></b>
  Use bfs approach by making all possiblities frst
  dp intiliaze -1, if we moved to that mark it as 0
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/5.%20Biconnected%20Graph.cpp">Biconnected graph</a></b>: If we remove 1 vertices it can't disconnected
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/9.%20Transitive%20closure%20of%20a%20graph.cpp">Transitive closure of a graph</a></b>
  frst track the all the destinations that particular node reaches(visited array)
  after that update adjacency list getting visited array
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/10.%20Find%20whether%20path%20exist.cpp">Find whether path exist</a></b>                                  Application: <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/14.%20Find%20number%20of%20islands.cpp">Find number of island</a></b>
  after finding source or destination, go dfs approach (make sure all edge case implemented like) 
  <b>i < 0 || i >= size || j < 0 || j >= size || grid[i][j] == 0</b> return false;
  
  **<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/11.%20Detect%20cycle%20in%20a%20directed%20graph.cpp">Detect cycle in a directed graph</a></b>**                             **<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/12.%20Detect%20cycle%20in%20a%20undirected%20graph.cpp">Detect cycle in a undirected graph</a></b>**
  keep track and mark visited, if we visited again then                  Same as Directed, but no need to track bfsvisited
  use dfsvisited(imagine recursive calls diagram) for
  checking whether we meet this node for not                             just need to track of parent node for detecting	
  for particular traversal and update it
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/17.%20Implementing%20Dijkstra%20Algorithm.cpp">Dijkstra Algorithm</a></b>     <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/13.%20Network%20Delay%20time.cpp">Network Delay time</a></b> Bellman ford:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/24.%20Negative%20weight%20cycle.cpp">Negative weight cycle</a></b>
                               Dijkstra's algo application                                                    make a distance vector and update it for all nodes
                               Intiallize all the signal to INT_MAX, and start with given node as 0,          except starting node, and check again for detecting
                               Use bfs approach and updated all nodes signal
                               
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/21.%20Critical%20connections%20in%20a%20network.cpp">Critical connections in a network</a></b>
  we use dfs approach for finding frst_time
  after end of graph, such that its visited all nodes then we updated the min_time using backtracking
  for detecting bridges <b>min_time[node] = min(min_time[node], min_time[child])</b>
  for detecting edges <b>first_time[node] < min_time[child]</b> then push it
   
  </pre>
# NOTE
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Graph/2.%20Find%20the%20town%20judge.cpp">Find town Judge(Indeg and Outdeg Concept)</a></b>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/25.%20word%20boggle%20problem.cpp">Word boggle problem</a></b>    <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/28.%20Find%20the%20string%20in%20a%20grid.cpp">Find string in the grid</a></b>
   first search for given word, and next go on
   mark what is visited v[i][j] != word[k] this condition
  </pre>
# Theory
  <pre>
  <b>Topological Sorting</b>: It should be DAG, there will be many possibilites find indeg choose which is least
  So for implementation use DFS + stack   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/15.%20Topological%20sort.cpp">Topological sort</a></b> **Application:** <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/20.%20Alien%20Dictionary.cpp">Alien dictionary</a></b>       <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/26.%20Prerequisites%20tasks.cpp">Prerequisites tasks</a></b>   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/22.%20course%20schedule.cpp">Course schedule</a></b>
                                         We are getting indeg and relationship from the given strings
                                         and used bfs approach for finding topological sort
  
  <b>Bipartite graph</b>: It need to be split into 2 independent sets like 2 coloring
  so 0 for not colored    <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/16.%20Bipartite%20graph.cpp">Bipartite graph</a></b>
  	1 for blue
  	-1 for red
  	check for valid color using dfs
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/8.%20Eulerian%20Path%20in%20Undirected%20path.cpp">Eulerian Path</a></b>
  	  number of vertices with an odd edges is > 2 then no path
  	  if it has even, then we start from any nodes (odd_vertices == 0)
  	  if it has 2, then we start from any 2 vertices (odd_vertices == 2)
  	  there will be no case where exactly one vertex has odd number of edges
  	  
  A Spanning Tree of a connected graph is a subgraph that contains all of that graph’s                <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Graph/19.%20Minimum%20Spanning%20tree.cpp">Minimum spanning tree</a></b>
     vertices and is a single tree. with E' = |V| - 1. It can't be disconnected                        we need to neglect highest weight from the graph so, we visited already that node, 
   MST is having minimum weight among all ST. A complete undirected graph can have n^(n-2) ST's        then no need to include it, add all lowest weights by using priority queue(min heap)
  From completed graph by removing max(e-n+1)edges, we can construct a ST                              and mark all the nodes that visited
   
  <b>Strongly Connected graph</b>If every vertices can reach all other vertices then it is SCC. Every single node is SCC. If we reverse edge direction
  in Directed graph, the property doesn't change. 
  In dfs approach make a visulization of passing and marking nodes for better
  </pre>
  
# Approaches
  <pre>
  When source and destination given use bfs, by using question condition
  when we want to search all possibilites use dfs
  </pre>
