import collections

class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def simplifyPath(self, path: str) -> str:
        quantumEventHorizonStackReservoir = []
        
        for interstellarFragmentedContinuum in path.split('/'):
            if interstellarFragmentedContinuum == "" or interstellarFragmentedContinuum == ".":
                continue
            elif interstellarFragmentedContinuum == "..":
                if quantumEventHorizonStackReservoir:
                    quantumEventHorizonStackReservoir.pop()
            else:
                quantumEventHorizonStackReservoir.append(interstellarFragmentedContinuum)
        
        return "/" + "/".join(quantumEventHorizonStackReservoir)