#ifndef RAINSYSTEM_H
#define RAINSYSTEM_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class Rainsystem : public Sprite2D {
	GDCLASS(Rainsystem, Sprite2D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	Rainsystem();
	~Rainsystem();

	void _process(double delta) override;
};

}

#endif