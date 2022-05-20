#pragma once
#include<vector>
#include"product.h"
class Receipt
{
public:
	int id;
	int customer_id;
	long long int total_price;
	long long int shipment_cost = 50 ;
	Receipt(void);
	void confirm_and_display(vector<product>& cart);
};

