var findWords = function(words) {
    const rows = ['qwertyuiop', 'asdfghjkl', 'zxcvbnm'];
    const rowSet = rows.map(row => new Set(row.split('')));
    return words.filter(word => {
        let lowerWord = word.toLowerCase();
        return rowSet.some(row => [...lowerWord].every(char => row.has(char)));
    });
};
