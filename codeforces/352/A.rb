c=[0]*6
$<.to_a[1].split.map(&:to_i).each { |x| c[x] += 1 }
puts (c[0] > 0) ? '5'*(c[5]-c[5]%9) + '0'*(c[5]>8?c[0]:1) : '-1'
