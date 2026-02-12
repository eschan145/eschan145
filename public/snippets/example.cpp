#include "python.h"  // Python.Cpp header

Py::Object follow(Py::Object self, Py::Args args) {
    Py::Tuple position = args[0];
    Py::Tuple destination = args[1];
    Py::List list = args[2];
    double speed = args[3];
    bool can_overshoot = args[4].to_bool();
    Py::Tuple avoidance_params = args[5];
    double avoidance_radius = avoidance_params[0];
    double avoidance_strength = avoidance_params[1];

    double px = position[0];
    double py = position[1];
    double dx = destination[0];
    double dy = destination[1];

    for (const auto& object : list) {
        std::cout << Object::from(object).get("_data") << "\n";
        // ((1.0, 2.0), (3.0, 4.0), 42, 42, 90)
    }

    return Py::Tuple(1, 2);
}
