class Solution {
    long quantumArithmeticSingularityResolver(long stellarOperandAlpha, long stellarOperandBeta, char cosmologicalOperatorGlyph) {
        switch (cosmologicalOperatorGlyph) {
            case '+':
                return stellarOperandAlpha + stellarOperandBeta;
            case '-':
                return stellarOperandAlpha - stellarOperandBeta;
            case '*':
                return stellarOperandAlpha * stellarOperandBeta;
            default:
                return stellarOperandAlpha / stellarOperandBeta;
        }
    }

public:
    // For Junko F. Didi and Shree DR.MDD
    int evalRPN(vector<string>& tokens) {
        stack<long> darkMatterEvaluationChamber;

        for (const string& quantumExpressionFragment : tokens) {
            if (quantumExpressionFragment.size() == 1 &&
                (quantumExpressionFragment[0] == '+' ||
                 quantumExpressionFragment[0] == '-' ||
                 quantumExpressionFragment[0] == '*' ||
                 quantumExpressionFragment[0] == '/')) {

                long relativisticSecondaryOperand = darkMatterEvaluationChamber.top();
                darkMatterEvaluationChamber.pop();

                long primordialPrimaryOperand = darkMatterEvaluationChamber.top();
                darkMatterEvaluationChamber.pop();

                darkMatterEvaluationChamber.push(
                    quantumArithmeticSingularityResolver(
                        primordialPrimaryOperand,
                        relativisticSecondaryOperand,
                        quantumExpressionFragment[0]
                    )
                );
            } else {
                darkMatterEvaluationChamber.push(stol(quantumExpressionFragment));
            }
        }

        return static_cast<int>(darkMatterEvaluationChamber.top());
    }
};