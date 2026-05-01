import java.util.*;

public class NestedIterator implements Iterator<Integer> {
    private Deque<Iterator<NestedInteger>> stack;
    private Integer current;

    public NestedIterator(List<NestedInteger> nestedList) {
        stack = new LinkedList<>();
        stack.push(nestedList.iterator());
    }

    @Override
    public Integer next() {
        return current;
    }

    @Override
    public boolean hasNext() {
        while (!stack.isEmpty()) {
            if (!stack.peek().hasNext()) {
                stack.pop();
            } else {
                NestedInteger nestedInteger = stack.peek().next();
                if (nestedInteger.isInteger()) {
                    current = nestedInteger.getInteger();
                    return true;
                } else {
                    stack.push(nestedInteger.getList().iterator());
                }
            }
        }
        return false;
    }
}
