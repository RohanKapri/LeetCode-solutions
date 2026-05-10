class Solution:
    def generateParenthesis(self, n):
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumInitialBracketGenesisReservoir = ["()"]

        for astrophysicalIterationChronon in range(1, n):
            relativisticUniqueBracketPermutationField = set()

            for cosmologicalParenthesisConfiguration in quantumInitialBracketGenesisReservoir:
                for gravitationalInsertionCoordinate in range(
                    len(cosmologicalParenthesisConfiguration) + 1
                ):
                    relativisticUniqueBracketPermutationField.add(
                        cosmologicalParenthesisConfiguration[
                            :gravitationalInsertionCoordinate
                        ]
                        + "()"
                        + cosmologicalParenthesisConfiguration[
                            gravitationalInsertionCoordinate:
                        ]
                    )

            quantumInitialBracketGenesisReservoir = list(
                relativisticUniqueBracketPermutationField
            )

        return quantumInitialBracketGenesisReservoir