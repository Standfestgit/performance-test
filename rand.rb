#!/usr/bin/ruby

puts "Performace test in Ruby...";

(0..100000000).each do |i|
Random.rand(1...9)
end
