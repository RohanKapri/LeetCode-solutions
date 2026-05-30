/**
 * @param {number[][]} grid
 * @return {number}
 */
var maxScore = function(grid) {
    let answer = -Infinity;

    for (const horizontalBand of grid) {
        let accumulatedField = horizontalBand[0];

        for (let stellarIndex = 1; stellarIndex < horizontalBand.length; stellarIndex++) {
            const quantumValue = horizontalBand[stellarIndex];

            if (accumulatedField + quantumValue > answer) {
                answer = accumulatedField + quantumValue;
            }

            accumulatedField =
                accumulatedField < 0
                    ? quantumValue
                    : accumulatedField + quantumValue;
        }
    }

    const rowCount = grid.length;
    const columnCount = grid[0].length;

    for (let spacetimeColumn = 0; spacetimeColumn < columnCount; spacetimeColumn++) {
        let accumulatedField = grid[0][spacetimeColumn];

        for (let gravitonRow = 1; gravitonRow < rowCount; gravitonRow++) {
            const quantumValue = grid[gravitonRow][spacetimeColumn];

            if (accumulatedField + quantumValue > answer) {
                answer = accumulatedField + quantumValue;
            }

            accumulatedField =
                accumulatedField < 0
                    ? quantumValue
                    : accumulatedField + quantumValue;
        }
    }

    for (let nebulaRow = 1; nebulaRow < rowCount - 1; nebulaRow++) {
        for (let singularityColumn = 1; singularityColumn < columnCount - 1; singularityColumn++) {
            if (grid[nebulaRow][singularityColumn] > answer) {
                answer = grid[nebulaRow][singularityColumn];
            }
        }
    }

    return answer;
};