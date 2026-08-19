class Solution:
    def maxNumberOfFamilies(self, n: int, reservedSeats: List[List[int]]) -> int:
        blocked_seats_map = defaultdict(set)

        for row, col in reservedSeats:
            if col in [2, 3, 4, 5]:
                blocked_seats_map[row].add('left')
            if col in [4, 5, 6, 7]:
                blocked_seats_map[row].add('middle')
            if col in [6, 7, 8, 9]:
                blocked_seats_map[row].add('right')
        
        total_count = 2 * (n - len(blocked_seats_map))

        availability_count = {0: 2, 1: 1, 2: 1, 3: 0}
        
        for blocked in blocked_seats_map.values():
            total_count += availability_count[len(blocked)]

        return total_count