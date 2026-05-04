from collections import defaultdict

class AllOne:
    def __init__(self):
        self.key_count_map = defaultdict(int)
        self.count_key_map = defaultdict(set)

    def inc(self, key: str) -> None:
        current_count = self.key_count_map[key]
        if current_count > 0:
            self.count_key_map[current_count].remove(key)
        self.key_count_map[key] += 1
        self.count_key_map[current_count + 1].add(key)
        if not self.count_key_map[current_count]:
            del self.count_key_map[current_count]

    def dec(self, key: str) -> None:
        current_count = self.key_count_map[key]
        self.count_key_map[current_count].remove(key)
        if current_count == 1:
            del self.key_count_map[key]
        else:
            self.key_count_map[key] -= 1
            self.count_key_map[current_count - 1].add(key)
        if not self.count_key_map[current_count]:
            del self.count_key_map[current_count]

    def getMaxKey(self) -> str:
        return next(iter(self.count_key_map[max(self.count_key_map)]), "") if self.count_key_map else ""

    def getMinKey(self) -> str:
        return next(iter(self.count_key_map[min(self.count_key_map)]), "") if self.count_key_map else ""