/**
 * @param {number[]} matchsticks
 * @return {boolean}
 */
var makesquare = function(matchsticks) {
    const totalLength = matchsticks.reduce((acc, val) => acc + val, 0);
    
    // If the total length is not divisible by 4, we can't form a square
    if (totalLength % 4 !== 0) return false;
    
    const sideLength = totalLength / 4;
    matchsticks.sort((a, b) => b - a);  // Sort in descending order to optimize the process
    
    const sides = [0, 0, 0, 0];
    
    const dfs = (index) => {
        if (index === matchsticks.length) {
            // If all sides are equal to the target length
            return sides[0] === sides[1] && sides[1] === sides[2] && sides[2] === sides[3];
        }
        
        for (let i = 0; i < 4; i++) {
            if (sides[i] + matchsticks[index] > sideLength) continue;  // Skip if it exceeds the target side length
            sides[i] += matchsticks[index];
            if (dfs(index + 1)) return true;
            sides[i] -= matchsticks[index];  // Backtrack
            if (sides[i] === 0) break;  // No point in trying the same matchstick on an empty side
        }
        
        return false;
    };
    
    return dfs(0);
};
