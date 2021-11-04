#include "commodity.hpp"
#include <string>

using namespace std;

const double tax = 1.25;

Commodity::Commodity(const string &name_, const double &id_, double price_) : name(name_), id(id_), price(price_) {}

const string &Commodity::get_name() const {
  return name;
}

const double &Commodity::get_id() const {
  return id;
}

double Commodity::get_price() const {
  return price;
}

double Commodity::get_price(double quantity) const {
  return price * quantity;
}

void Commodity::set_price(double newPrice) {
  price = newPrice;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return get_price(quantity) * tax;
}