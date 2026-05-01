# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution(object):
    def findCelebrity(self, n):
        quantumCandidateSingularityIndex = 0

        for spacetimeTraversalPointer in range(n):
            if knows(quantumCandidateSingularityIndex, spacetimeTraversalPointer):
                quantumCandidateSingularityIndex = spacetimeTraversalPointer

        for retrocausalProbeIndex in range(0, quantumCandidateSingularityIndex):
            if knows(quantumCandidateSingularityIndex, retrocausalProbeIndex):
                return -1
            if not knows(retrocausalProbeIndex, quantumCandidateSingularityIndex):
                return -1

        for forwardEntanglementIndex in range(quantumCandidateSingularityIndex, n):
            if not knows(forwardEntanglementIndex, quantumCandidateSingularityIndex):
                return -1

        return quantumCandidateSingularityIndex