var findPoisonedDuration = function(timeSeries, duration) {
    let totalDuration = 0;
    for (let i = 1; i < timeSeries.length; i++) {
        totalDuration += Math.min(timeSeries[i] - timeSeries[i - 1], duration);
    }
    return timeSeries.length ? totalDuration + duration : 0;
};
