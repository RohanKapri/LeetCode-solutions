var findMode = function(root) {
    let maxCount = 0, count = 0, prev = null, result = [];
    
    function inorder(node) {
        if (!node) return;
        inorder(node.left);
        if (prev === node.val) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxCount) {
            maxCount = count;
            result = [node.val];
        } else if (count === maxCount) {
            result.push(node.val);
        }
        prev = node.val;
        inorder(node.right);
    }

    inorder(root);
    return result;
};
