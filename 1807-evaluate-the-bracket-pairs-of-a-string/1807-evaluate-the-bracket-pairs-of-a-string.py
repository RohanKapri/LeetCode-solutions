class Solution:
    def evaluate(self, s: str, knowledge: list[list[str]]) -> str:
        # Create a dictionary for fast look-up of key-value pairs
        knowledge_map = {key: value for key, value in knowledge}
        
        result = []
        i = 0
        while i < len(s):
            if s[i] == '(':
                # Find the corresponding closing parenthesis
                j = i + 1
                while s[j] != ')':
                    j += 1
                
                key = s[i + 1:j]
                # Check if the key exists in the knowledge map
                if key in knowledge_map:
                    result.append(knowledge_map[key])
                else:
                    result.append('?')
                # Move the index past the ')'
                i = j + 1
            else:
                # Append the current character to the result
                result.append(s[i])
                i += 1
                
        return ''.join(result)
