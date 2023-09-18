/*
    each node of the tree represents a military unit. We are given the no. of soldiers in each     unit.
    we need to balance the tree such that
        all nodes belonging to the same parent node have the same subtree sum
        we can only balance by deleting some soldiers from a node 
        we should remove the minimum no. of soldiers(total)
    return the no. of soldiers total after balancing

    constraints:
        N<=500
        node.val<=100
        depth<=100
    input form:(for each of the n nodes)
        parent index, soldiers in that unit
*/
