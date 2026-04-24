class Solution {
    public String simplifyPath(String path) {
        // Split the path by "/" to get all the parts of the path
        String[] parts = path.split("/");
        
        // Use a stack to keep track of the valid directory names
        LinkedList<String> stack = new LinkedList<>();
        
        // Process each part of the path
        for (String part : parts) {
            // Ignore empty parts or current directory "."
            if (part.equals("") || part.equals(".")) {
                continue;
            }
            
            // If the part is "..", pop from stack (go up one level) if the stack is not empty
            if (part.equals("..")) {
                if (!stack.isEmpty()) {
                    stack.pollLast(); // Pop the last directory
                }
            } else {
                // Otherwise, it's a valid directory, so push it to the stack
                stack.addLast(part);
            }
        }
        
        // Build the final simplified path
        StringBuilder sb = new StringBuilder();
        
        // If stack is empty, we are at the root directory, so return "/"
        if (stack.isEmpty()) {
            return "/";
        }
        
        // Otherwise, build the path from the stack
        for (String dir : stack) {
            sb.append("/").append(dir);
        }
        
        return sb.toString();
    }
}
