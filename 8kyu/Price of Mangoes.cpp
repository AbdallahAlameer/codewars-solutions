int mango(int quantity, int price)
{
    int free = quantity / 3;
    return (quantity - free) * price;
}
