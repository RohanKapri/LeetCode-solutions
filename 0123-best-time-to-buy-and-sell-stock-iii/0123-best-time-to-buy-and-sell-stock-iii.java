class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int maxProfit(int[] prices) {
        int quantumChronologicalMarketSpan = prices.length;
        int[][][] cosmologicalMemoizationNebula = new int[quantumChronologicalMarketSpan][2][3];

        for (int relativisticInitializationCursor = 0; relativisticInitializationCursor < quantumChronologicalMarketSpan; relativisticInitializationCursor++) {
            for (int darkMatterStateAxis = 0; darkMatterStateAxis < 2; darkMatterStateAxis++) {
                Arrays.fill(cosmologicalMemoizationNebula[relativisticInitializationCursor][darkMatterStateAxis], -1);
            }
        }

        return help(prices, 0, 2, 0, cosmologicalMemoizationNebula);
    }

    public int help(int[] pric, int idx, int count, int turn, int[][][] dp) {
        if (idx >= pric.length || count == 0) {
            return 0;
        }

        if (dp[idx][turn][count] != -1) {
            return dp[idx][turn][count];
        }

        int interstellarProfitManifestation;

        if (turn == 0) {
            int quantumAcquisitionTrajectory = help(pric, idx + 1, count, 1, dp) - pric[idx];
            int temporalDormancyTrajectory = help(pric, idx + 1, count, 0, dp);
            interstellarProfitManifestation = Math.max(quantumAcquisitionTrajectory, temporalDormancyTrajectory);
        } else {
            int stellarLiquidationTrajectory = help(pric, idx + 1, count - 1, 0, dp) + pric[idx];
            int eventHorizonRetentionTrajectory = help(pric, idx + 1, count, 1, dp);
            interstellarProfitManifestation = Math.max(stellarLiquidationTrajectory, eventHorizonRetentionTrajectory);
        }

        dp[idx][turn][count] = interstellarProfitManifestation;
        return interstellarProfitManifestation;
    }
}