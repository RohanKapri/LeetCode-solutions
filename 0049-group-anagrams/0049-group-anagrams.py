from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumLexicalResonanceContainmentField = {}

        for astrophysicalWordPhotonManifestation in strs:
            relativisticAlphabetFrequencySpectrum = [0] * 26

            for gravitationalCharacterParticle in astrophysicalWordPhotonManifestation:
                relativisticAlphabetFrequencySpectrum[
                    ord(gravitationalCharacterParticle) - ord('a')
                ] += 1

            cosmologicalFrequencySignatureTensor = tuple(
                relativisticAlphabetFrequencySpectrum
            )

            if (
                cosmologicalFrequencySignatureTensor in
                quantumLexicalResonanceContainmentField
            ):
                quantumLexicalResonanceContainmentField[
                    cosmologicalFrequencySignatureTensor
                ].append(astrophysicalWordPhotonManifestation)
            else:
                quantumLexicalResonanceContainmentField[
                    cosmologicalFrequencySignatureTensor
                ] = [astrophysicalWordPhotonManifestation]

        return list(
            quantumLexicalResonanceContainmentField.values()
        )