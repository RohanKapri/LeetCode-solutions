import itertools

class Solution:
    def __init__(self):
        self.lowercase = set('abcdefghijklmnopqrstuvwxyz')
        self.uppercase = set('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
        self.digits = set('0123456789')

    def strongPasswordChecker(self, s: str) -> int:
        characters = set(s)
        missing_lowercase = not (characters & self.lowercase)
        missing_uppercase = not (characters & self.uppercase)
        missing_digits = not (characters & self.digits)
        missing_types = missing_lowercase + missing_uppercase + missing_digits
        
        length_adjustment = max(0, 6 - len(s))
        delete_adjustment = max(0, len(s) - 20)

        groups = [len(list(group)) for _, group in itertools.groupby(s)]
        
        def minimize_deletions():
            index, _ = min(
                enumerate(groups),
                key=lambda x: x[1] % 3 if x[1] >= 3 else 10 - x[1]
            )
            groups[index] -= 1

        for _ in range(delete_adjustment):
            minimize_deletions()

        replacements_needed = sum(group // 3 for group in groups)
        
        return max(missing_types, replacements_needed, length_adjustment) + delete_adjustment
