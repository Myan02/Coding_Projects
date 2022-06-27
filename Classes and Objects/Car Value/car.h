#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear; 
      int purchasePrice;   // TODO: Declare purchasePrice member (int)
      int currentValue;
   
   public:
      void SetModelYear(int userYear);

      void SetPurchasePrice(int userPrice);

      void CalcCurrentValue(int currentYear);

      int GetModelYear() const;
   
      int GetPurchasePrice() const;
   
      int GetCurrentValue() const;
   
      void PrintInfo() const;
};

#endif