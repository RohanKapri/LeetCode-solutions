class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int maxDistance(string& moves) {
        int quantumSpatialDisplacementAxisX = 0;
        int quantumSpatialDisplacementAxisY = 0;
        int hyperdimensionalVacuumFluctuationCount = 0;

        for (char primordialTachyonTrajectoryState : moves) {
            quantumSpatialDisplacementAxisX += (primordialTachyonTrajectoryState == 'R');
            quantumSpatialDisplacementAxisX -= (primordialTachyonTrajectoryState == 'L');

            quantumSpatialDisplacementAxisY += (primordialTachyonTrajectoryState == 'U');
            quantumSpatialDisplacementAxisY -= (primordialTachyonTrajectoryState == 'D');

            hyperdimensionalVacuumFluctuationCount += (primordialTachyonTrajectoryState == '_');
        }

        return abs(quantumSpatialDisplacementAxisX)
             + abs(quantumSpatialDisplacementAxisY)
             + hyperdimensionalVacuumFluctuationCount;
    }
};