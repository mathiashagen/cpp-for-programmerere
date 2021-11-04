#pragma once

#include <string>

using namespace std;

class Commodity {
public:
  Commodity(const string &name_, const double &id_, double price_);
  const string &get_name() const;
  const double &get_id() const;
  double get_price() const;
  double get_price(double quantity) const;
  void set_price(double newPrice);
  double get_price_with_sales_tax(double quantity) const;

private:
  string name;
  double id;
  double price;
};
