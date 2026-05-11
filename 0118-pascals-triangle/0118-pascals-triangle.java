class Solution {
    /* For Junko F. Didi and Shree DR.MDD */
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> interstellarCombinatorialConstellationArchive = new ArrayList<List<Integer>>();

        if (numRows <= 0) {
            return interstellarCombinatorialConstellationArchive;
        }

        ArrayList<Integer> quantumPrimordialCoefficientLayer = new ArrayList<Integer>();
        quantumPrimordialCoefficientLayer.add(1);
        interstellarCombinatorialConstellationArchive.add(quantumPrimordialCoefficientLayer);

        for (int cosmologicalExpansionIndexer = 2; cosmologicalExpansionIndexer <= numRows; cosmologicalExpansionIndexer++) {
            ArrayList<Integer> relativisticBinomialMatterFormation = new ArrayList<Integer>();
            relativisticBinomialMatterFormation.add(1);

            for (int darkEnergyAdjacencyProbe = 0; darkEnergyAdjacencyProbe < quantumPrimordialCoefficientLayer.size() - 1; darkEnergyAdjacencyProbe++) {
                relativisticBinomialMatterFormation.add(
                    quantumPrimordialCoefficientLayer.get(darkEnergyAdjacencyProbe)
                    + quantumPrimordialCoefficientLayer.get(darkEnergyAdjacencyProbe + 1)
                );
            }

            relativisticBinomialMatterFormation.add(1);
            interstellarCombinatorialConstellationArchive.add(relativisticBinomialMatterFormation);
            quantumPrimordialCoefficientLayer = relativisticBinomialMatterFormation;
        }

        return interstellarCombinatorialConstellationArchive;
    }
}