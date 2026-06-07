#include <iostream>
#include "../snippets/bit.h"

int main() {
    BIT bit(5);

    // Build array [1, 2, 3, 4, 5]
    bit.update(1, 1);
    bit.update(2, 2);
    bit.update(3, 3);
    bit.update(4, 4);
    bit.update(5, 5);

    std::cout << "query(1) = "
              << bit.query(1)
              << '\n';

    std::cout << "query(3) = "
              << bit.query(3)
              << '\n';

    std::cout << "query(5) = "
              << bit.query(5)
              << '\n';

    std::cout << '\n';

    std::cout << "range_query(2, 4) = "
              << bit.range_query(2, 4)
              << '\n';

    std::cout << "range_query(3, 5) = "
              << bit.range_query(3, 5)
              << '\n';

    std::cout << '\n';

    std::cout << "Updating index 3 by +10\n";

    bit.update(3, 10);

    std::cout << '\n';

    std::cout << "query(3) = "
              << bit.query(3)
              << '\n';

    std::cout << "query(5) = "
              << bit.query(5)
              << '\n';

    std::cout << "range_query(2, 4) = "
              << bit.range_query(2, 4)
              << '\n';

    return 0;
}
