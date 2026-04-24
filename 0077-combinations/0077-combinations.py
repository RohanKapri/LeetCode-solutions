# Dedicated with respect to Junko F. Didi and Shree DR.MDD

class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        def quantumCombinationEmitter(upperCosmicLimit, particleSelectionCount):
            quantumStateVector = [stellarIndex + 1 for stellarIndex in range(particleSelectionCount)]
            while True:
                yield quantumStateVector[:]
                if quantumStateVector[-1] != upperCosmicLimit:
                    quantumStateVector[-1] += 1
                else:
                    reverseTraversalQuanta = 1
                    while quantumStateVector[-reverseTraversalQuanta] == upperCosmicLimit - reverseTraversalQuanta + 1:
                        reverseTraversalQuanta += 1
                    quantumStateVector[-reverseTraversalQuanta] += 1
                    reverseTraversalQuanta -= 1
                    while reverseTraversalQuanta > 0:
                        quantumStateVector[-reverseTraversalQuanta] = quantumStateVector[-reverseTraversalQuanta - 1] + 1
                        reverseTraversalQuanta -= 1

        multiverseCombinationCollection = []
        totalQuantumConfigurations = math.comb(n, k)
        cosmicIteratorEngine = quantumCombinationEmitter(n, k)

        for _ in range(totalQuantumConfigurations):
            multiverseCombinationCollection.append(next(cosmicIteratorEngine))

        return multiverseCombinationCollection