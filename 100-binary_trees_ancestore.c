/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @node1: A pointer to the first node.
 * @node2: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node.
 *         NULL if no common ancestor is found (or either node is NULL).
 *
 * Description: This function finds the lowest common ancestor of two nodes
 *              in a binary tree. It traverses up the tree from both nodes
 *              until reaching a common ancestor or the root node. It returns
 *              a pointer to the lowest common ancestor if found, otherwise
 *              it returns NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *node1,
                                     const binary_tree_t *node2)
{
    size_t depth_node1, depth_node2;

    if (!node1 || !node2)
        return (NULL);

    depth_node1 = binary_tree_depth(node1);
    depth_node2 = binary_tree_depth(node2);

    while (depth_node1 > depth_node2)
    {
        node1 = node1->parent;
        depth_node1--;
    }
    while (depth_node2 > depth_node1)
    {
        node2 = node2->parent;
        depth_node2--;
    }
    while (node1 && node2)
    {
        if (node1 == node2)
            return ((binary_tree_t *)node1);
        node1 = node1->parent;
        node2 = node2->parent;
    }
    return ((binary_tree_t *)node1);
}
