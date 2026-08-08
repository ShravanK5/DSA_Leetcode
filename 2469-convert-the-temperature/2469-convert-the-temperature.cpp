class Solution {
public:
    vector<double> convertTemperature(double celcius) {
      vector<double> ans;
      ans.push_back( celcius + 273.15);
      ans.push_back(celcius * 1.80 + 32.00 );

      return ans;  
    }
};