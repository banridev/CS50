// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

float half(float bill_amount, float tax_percent, int tip_percent)
{
    float tax_decimal = tax_percent / 100.0;
    float tip_decimal = tip_percent / 100.0;

    float bill_after_tax = bill_amount * tax_decimal + bill_amount;
    float bill_after_tax_tip = bill_after_tax * tip_decimal + bill_after_tax;
    float invoice_split = bill_after_tax_tip / 2;

    return invoice_split;
}
