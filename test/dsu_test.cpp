#include <iostream>
#include "../snippets/dsu.h"

int main() {
    DSU dsu(6);

    std::cout << "Initial components: "
              << dsu.num_components() << "\n\n";

    std::cout << "unite(1, 2): "
              << dsu.unite(1, 2) << '\n';

    std::cout << "unite(2, 3): "
              << dsu.unite(2, 3) << '\n';

    std::cout << "unite(4, 5): "
              << dsu.unite(4, 5) << '\n';

    std::cout << "\nComponents: "
              << dsu.num_components() << "\n\n";

    std::cout << "same(1, 3): "
              << dsu.same(1, 3) << '\n';

    std::cout << "same(1, 5): "
              << dsu.same(1, 5) << '\n';

    std::cout << "\nSize of component containing 1: "
              << dsu.component_size(1) << '\n';

    std::cout << "Size of component containing 5: "
              << dsu.component_size(5) << '\n';

    std::cout << "\nMerging the two components\n";

    std::cout << "unite(3, 5): "
              << dsu.unite(3, 5) << '\n';

    std::cout << "\nComponents: "
              << dsu.num_components() << '\n';

    std::cout << "same(1, 5): "
              << dsu.same(1, 5) << '\n';

    std::cout << "Size of component containing 4: "
              << dsu.component_size(4) << '\n';

    std::cout << "\nTrying duplicate union\n";

    std::cout << "unite(1, 4): "
              << dsu.unite(1, 4) << '\n';

    std::cout << "Components: "
              << dsu.num_components() << '\n';

    return 0;
}
