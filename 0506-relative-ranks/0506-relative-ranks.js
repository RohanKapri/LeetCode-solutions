var findRelativeRanks = function(score) {
    let medals = { 0: "Gold Medal", 1: "Silver Medal", 2: "Bronze Medal" };
    let _score = [...score].map((e, i) => [e, i]).sort((a, b) => b[0] - a[0]);
    let placemet = new Array(score.length);

    for(let i = 0; i < score.length; i++) {
        placemet[_score[i][1]] = String(medals[i] ?? i + 1);
    }

    return placemet
};