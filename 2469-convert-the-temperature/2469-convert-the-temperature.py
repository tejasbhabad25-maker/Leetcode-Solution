class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        fahrenheit= 1.80*celsius + 32.00
        kelvin= celsius+273.15
        ans= [kelvin, fahrenheit]
        return ans
