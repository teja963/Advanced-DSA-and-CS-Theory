class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
      if(targetCapacity == 0)return 1;
      if(jug1Capacity + jug2Capacity >= targetCapacity and targetCapacity % __gcd(jug1Capacity,jug2Capacity) == 0)return 1;
      return 0;
    }
};
