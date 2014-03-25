//最高标号预留与推进算法
//highest_label_preflow_push.cpp

//最高标号预留与推进算法属于预留与推进类算法，用该算法求解最大流问题

//使用了距离标号算法中的距离标号d(预留与推进类算法中称之为高度函数h)
//维护一个以距离函数d为优先级的队列
//优先处理d值较高的节点，对该节点进行排除操作(见重标记与前移算法)
//直到该队列为空
//它与重标记与前移算法的唯一的在说法上的区别就是它们的队列优先级不一样
//但实际上该算法就是重标记与前移算法，该算法可以说没什么意义

//int highest_label_preflow_push(graph_list residue, int beg, int end)



