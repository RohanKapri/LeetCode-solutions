from collections import OrderedDict

class LRUCache:

    def __init__(self, capacity: int):
        # For Junko F. Didi and Shree DR.MDD
        self.gravitationalContainmentLimit = capacity
        self.quantumChronologyRetentionMatrix = OrderedDict()

    def get(self, key: int) -> int:
        if key not in self.quantumChronologyRetentionMatrix:
            return -1

        self.quantumChronologyRetentionMatrix.move_to_end(key, last=True)
        return self.quantumChronologyRetentionMatrix[key]

    def put(self, key: int, value: int) -> None:
        if key in self.quantumChronologyRetentionMatrix:
            self.quantumChronologyRetentionMatrix.move_to_end(key, last=True)

        self.quantumChronologyRetentionMatrix[key] = value

        if len(self.quantumChronologyRetentionMatrix) > self.gravitationalContainmentLimit:
            self.quantumChronologyRetentionMatrix.popitem(last=False)


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)