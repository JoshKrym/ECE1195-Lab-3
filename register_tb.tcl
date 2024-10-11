# restart the simulation
restart

# Testing Load

add_force CLK {0} {1 0.5ns} -repeat_every 1ns
# run 0.5 ns
add_force LD 1
add_force D -radix hex FF00FF00FF00FF00
add_force EN 1
add_force RST 0

if {[get_value -radix unsigned Q] == [expr {0xFF00FF00FF00FF00}]} {
	puts "Correct! Load"
} else {
	puts "Wrong! Load"
}

run 10 ns

# Testing Reset

add_force RST 1

run 10 ns

if {[get_value -radix unsigned Q] == [expr {0x0000000000000000}]} {
	puts "Correct! Reset"
} else {
	puts "Wrong! Reset"
}

# Testing Load2

add_force RST 0
add_force LD 1
add_force D -radix hex FFF0FFF0FFF0FFF0
add_force EN 1

run 10 ns

if {[get_value -radix unsigned Q] == [expr {0xFF00FF00FF00FF00}]} {
	puts "Correct! Load2"
} else {
	puts "Wrong! Load2"
}
