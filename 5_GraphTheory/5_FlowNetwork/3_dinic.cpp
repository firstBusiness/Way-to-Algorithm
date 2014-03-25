//Dinic算法
//dinic.cpp

//Dinic算法属于增广路径类算法，用该算法求解最大流问题

//使用距离标号d，d值相等的节点属于流网络中的同一层，从而对流网络分层
//重复以下步骤：
//借助距离标号d
//Dinic算法在流网络的相邻层之间进行dfs搜索增广路径，而同一层节点不必搜索
//即从源点开始，对节点u不考虑和它d值相同的节点，只考虑比它d值小1的节点
//在拓扑顺序上看，d值小1的节点是拓扑上相邻的节点
//即满足d[i] = d[j] + 1，其中i是增广路径上一条边的父节点，j是该边的子节点
//通过设置距离标号加速dfs搜索增广路径的速度
//可以看出来，流网络分层和容许边的本质是一样的
//使用得到的增广路径具有副作用：添加反向边
//可以用bfs从汇点反向搜索到源点(遍历的顺序即为节点相反的拓扑顺序)
//得到残留网络的新距离标号d
//这样一直到无法继续找出新的增广路径时即可得到最大流

//int dinic(graph_matrix residue, int beg, int end)



