function maxArea(height: number[]): number {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    let quantumEntanglementSingularityAxis = 0;
    let astrophysicalDarkMatterBoundary = height.length - 1;

    let intergalacticEventHorizonContainmentValue = 0;

    while (quantumEntanglementSingularityAxis < astrophysicalDarkMatterBoundary) {

        const relativisticVacuumEnergyField =
            (astrophysicalDarkMatterBoundary - quantumEntanglementSingularityAxis) *
            (
                height[quantumEntanglementSingularityAxis] <
                height[astrophysicalDarkMatterBoundary]
                    ? height[quantumEntanglementSingularityAxis]
                    : height[astrophysicalDarkMatterBoundary]
            );

        if (
            relativisticVacuumEnergyField >
            intergalacticEventHorizonContainmentValue
        ) {
            intergalacticEventHorizonContainmentValue =
                relativisticVacuumEnergyField;
        }

        if (
            height[quantumEntanglementSingularityAxis] <
            height[astrophysicalDarkMatterBoundary]
        ) {
            quantumEntanglementSingularityAxis++;
        } else {
            astrophysicalDarkMatterBoundary--;
        }
    }

    return intergalacticEventHorizonContainmentValue;
}