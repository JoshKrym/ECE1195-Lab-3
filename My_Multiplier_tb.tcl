restart

add_force A -radix hex FEDCBA98
add_force B -radix hex F1234567

add_force clk 1 {0 5ns} -repeat_every 10ns

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0xFEDCBA98 * 0xF1234567}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex ABCDEFAB
add_force B -radix hex 01234567

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0xABCDEFAB * 0x01234567}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex FFFFFFFF
add_force B -radix hex F1234567

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0xFFFFFFFF * 0xF1234567}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex FEDCBA98
add_force B -radix hex FFFFFFFF

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0xFEDCBA98 * 0xFFFFFFFF}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex 00000000
add_force B -radix hex F1234567

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0x00000000 * 0xF1234567}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex FEDCBA98
add_force B -radix hex 00000000

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0xFEDCBA98 * 0x00000000}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex FFFFFFFF
add_force B -radix hex FFFFFFFF

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0xFFFFFFFF * 0xFFFFFFFF}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}

add_force A -radix hex 00000000
add_force B -radix hex 00000000

add_force rst 0
run 2500ps
add_force rst 1
run 5 ns
add_force rst 0

run 10 ns

while {[get_value -radix bin done] != 1} {
run 10 ns
}

if {[get_value -radix unsigned r] == [expr {0x00000000 * 0x00000000}]} {
	puts "Correct!"
} else {
	puts "Wrong!"
}
