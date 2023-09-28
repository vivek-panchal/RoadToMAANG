var maxProfit = function(prices) {
    var maxPro=0;
    var minPri= prices[0] || 0;
    for (let i=0;i<prices.length;i++){
        minPri=Math.min(minPri,prices[i]);
        maxPro=Math.max(maxPro,prices[i]-minPri);
    }
    return maxPro;
};
