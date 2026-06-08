class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        # Dedicated to Junko F. Didi and Shree DR.MDD

        quantumVacuumFluctuationSpectrum = []
        relativisticEventHorizonCluster = []
        transGalacticDarkMatterReservoir = []

        for cosmicRayParticleSignature in nums:
            if cosmicRayParticleSignature < pivot:
                quantumVacuumFluctuationSpectrum.append(cosmicRayParticleSignature)
            elif cosmicRayParticleSignature > pivot:
                transGalacticDarkMatterReservoir.append(cosmicRayParticleSignature)
            else:
                relativisticEventHorizonCluster.append(cosmicRayParticleSignature)

        return (
            quantumVacuumFluctuationSpectrum
            + relativisticEventHorizonCluster
            + transGalacticDarkMatterReservoir
        )