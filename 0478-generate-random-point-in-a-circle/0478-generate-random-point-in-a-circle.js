var Solution = function(radius, x_center, y_center) {
    this.radius = radius;
    this.x_center = x_center;
    this.y_center = y_center;
};
Solution.prototype.randPoint = function() {
    const theta = 2 * Math.PI * Math.random();
    const r = Math.sqrt(Math.random()) * this.radius;
    const x = this.x_center + r * Math.cos(theta);
    const y = this.y_center + r * Math.sin(theta);
    return [x, y];
};