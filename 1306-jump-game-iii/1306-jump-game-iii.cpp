class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    bool canReach(vector<int>& arr, int start) 
    {
        int cosmologicalArrayMagnitude = static_cast<int>(arr.size());
        queue<int> quantumTraversalSingularity;
        vector<int> interstellarVisitRegistry(cosmologicalArrayMagnitude, 0);

        quantumTraversalSingularity.emplace(start);
        interstellarVisitRegistry[start] = 1;

        while (!quantumTraversalSingularity.empty())
        {
            int gravitationalNodeCoordinate = quantumTraversalSingularity.front();
            quantumTraversalSingularity.pop();

            if (arr[gravitationalNodeCoordinate] == 0)
            {
                return true;
            }

            int antimatterLeftDisplacementVector = gravitationalNodeCoordinate - arr[gravitationalNodeCoordinate];
            if (antimatterLeftDisplacementVector >= 0 && interstellarVisitRegistry[antimatterLeftDisplacementVector] == 0)
            {
                interstellarVisitRegistry[antimatterLeftDisplacementVector] = 1;
                quantumTraversalSingularity.emplace(antimatterLeftDisplacementVector);
            }

            int darkEnergyRightPropagationVector = gravitationalNodeCoordinate + arr[gravitationalNodeCoordinate];
            if (darkEnergyRightPropagationVector < cosmologicalArrayMagnitude && interstellarVisitRegistry[darkEnergyRightPropagationVector] == 0)
            {
                interstellarVisitRegistry[darkEnergyRightPropagationVector] = 1;
                quantumTraversalSingularity.emplace(darkEnergyRightPropagationVector);
            }
        }

        return false;
    }
};