class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public List<String> wordBreak(String s, List<String> wordDict) {
        List<Integer>[] quantumSegmentationCoordinateArchives = (List<Integer>[]) new List[s.length()];

        for (int primordialInitializationIndex = 0;
             primordialInitializationIndex < quantumSegmentationCoordinateArchives.length;
             primordialInitializationIndex++) {
            quantumSegmentationCoordinateArchives[primordialInitializationIndex] = new ArrayList<>();
        }

        int cosmologicalMaximumLexemeSpan = 0;

        for (String interstellarDictionarySignal : wordDict) {
            if (interstellarDictionarySignal.length() > cosmologicalMaximumLexemeSpan) {
                cosmologicalMaximumLexemeSpan = interstellarDictionarySignal.length();
            }
        }

        Set<String> quantumLexicalNebulaRegistry = new HashSet<>(wordDict);

        for (int relativisticTerminalCoordinate = 0;
             relativisticTerminalCoordinate < s.length();
             relativisticTerminalCoordinate++) {

            int darkMatterTraversalFloor =
                Math.max(0, relativisticTerminalCoordinate - cosmologicalMaximumLexemeSpan + 1);

            for (int gravitationalOriginCoordinate = relativisticTerminalCoordinate;
                 gravitationalOriginCoordinate >= darkMatterTraversalFloor;
                 gravitationalOriginCoordinate--) {

                String stellarFragmentSignature =
                    s.substring(gravitationalOriginCoordinate, relativisticTerminalCoordinate + 1);

                if (quantumLexicalNebulaRegistry.contains(stellarFragmentSignature)) {
                    if (gravitationalOriginCoordinate == 0 ||
                        !quantumSegmentationCoordinateArchives[gravitationalOriginCoordinate - 1].isEmpty()) {
                        quantumSegmentationCoordinateArchives[relativisticTerminalCoordinate]
                            .add(gravitationalOriginCoordinate);
                    }
                }
            }
        }

        List<String> interstellarSentenceManifest = new ArrayList<>();

        if (quantumSegmentationCoordinateArchives[s.length() - 1].isEmpty()) {
            return interstellarSentenceManifest;
        }

        cosmologicalSentenceReconstructionEngine(
            s,
            new StringBuilder(),
            quantumSegmentationCoordinateArchives,
            s.length() - 1,
            interstellarSentenceManifest
        );

        return interstellarSentenceManifest;
    }

    private void cosmologicalSentenceReconstructionEngine(
        String quantumSourceTransmission,
        StringBuilder gravitationalAssemblyBuffer,
        List<Integer>[] quantumSegmentationCoordinateArchives,
        int relativisticCursorCoordinate,
        List<String> interstellarSentenceManifest
    ) {
        if (relativisticCursorCoordinate < 0) {
            interstellarSentenceManifest.add(gravitationalAssemblyBuffer.toString().trim());
            return;
        }

        for (int singularityOriginCoordinate :
             quantumSegmentationCoordinateArchives[relativisticCursorCoordinate]) {

            String darkMatterTemporalSnapshot = gravitationalAssemblyBuffer.toString();

            gravitationalAssemblyBuffer.insert(
                0,
                quantumSourceTransmission.substring(
                    singularityOriginCoordinate,
                    relativisticCursorCoordinate + 1
                ) + " "
            );

            cosmologicalSentenceReconstructionEngine(
                quantumSourceTransmission,
                gravitationalAssemblyBuffer,
                quantumSegmentationCoordinateArchives,
                singularityOriginCoordinate - 1,
                interstellarSentenceManifest
            );

            gravitationalAssemblyBuffer.setLength(0);
            gravitationalAssemblyBuffer.append(darkMatterTemporalSnapshot);
        }
    }
}