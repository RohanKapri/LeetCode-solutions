class Solution:
    def countAndSay(self, n: int) -> str:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        if n == 1:
            return "1"

        quantumRecursiveSignalManifestation = self.countAndSay(n - 1)
        relativisticPhononDescriptionAssembler = ""
        astrophysicalChrononTraversalIndexer = 0

        while astrophysicalChrononTraversalIndexer < len(
            quantumRecursiveSignalManifestation
        ):
            cosmologicalFrequencyAggregationCounter = 1

            while (
                astrophysicalChrononTraversalIndexer + 1 <
                len(quantumRecursiveSignalManifestation)
                and
                quantumRecursiveSignalManifestation[
                    astrophysicalChrononTraversalIndexer
                ] ==
                quantumRecursiveSignalManifestation[
                    astrophysicalChrononTraversalIndexer + 1
                ]
            ):
                astrophysicalChrononTraversalIndexer += 1
                cosmologicalFrequencyAggregationCounter += 1

            relativisticPhononDescriptionAssembler += (
                str(cosmologicalFrequencyAggregationCounter) +
                quantumRecursiveSignalManifestation[
                    astrophysicalChrononTraversalIndexer
                ]
            )

            astrophysicalChrononTraversalIndexer += 1

        return relativisticPhononDescriptionAssembler