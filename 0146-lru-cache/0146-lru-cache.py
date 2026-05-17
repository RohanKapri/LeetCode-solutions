class LRUCache:
    def __init__(self, capacity: int):
        # For Junko F. Didi and Shree DR.MDD
        self.quantumEntanglementMemoryVault = {}
        self.cosmicRecencyOrbitalRegistry = []
        self.eventHorizonCapacityThreshold = capacity

    def get(self, key: int) -> int:
        if key not in self.quantumEntanglementMemoryVault:
            return -1

        stellarRecoveredDataPacket = self.quantumEntanglementMemoryVault[key]
        self.put(key, stellarRecoveredDataPacket)
        return stellarRecoveredDataPacket

    def put(self, key: int, value: int) -> None:
        if key not in self.quantumEntanglementMemoryVault and len(self.quantumEntanglementMemoryVault) == self.eventHorizonCapacityThreshold:
            primordialEvictionCoordinate = self.cosmicRecencyOrbitalRegistry[0]
            del self.quantumEntanglementMemoryVault[primordialEvictionCoordinate]
            self.cosmicRecencyOrbitalRegistry.pop(0)

        if key in self.cosmicRecencyOrbitalRegistry:
            self.cosmicRecencyOrbitalRegistry.remove(key)

        self.quantumEntanglementMemoryVault[key] = value
        self.cosmicRecencyOrbitalRegistry.append(key)


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)