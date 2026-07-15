## Hashing

### hash_array.cpp
Frequency counting using a fixed-size array instead of a hash map.

**Approach:** Instead of hardcoding array size, compute `max_value` from 
the input array first, then size the frequency array to `max_value + 1`. 
This avoids wasted space and out-of-bounds errors from guessing a fixed size.

- Time: O(n + q)
- Space: O(max_value)
- Edge case handled: empty input array (n == 0)

### hash_map.cpp
using a hash map

for map:
TIME: O(log(n))
SPACE: O(log(n))

for unordered_map:
TIME: O(1)-best, avg. case, O(n)-worst case
SPACE: O(1)-best, avg. case, O(n)-worst case

n is the number of elements in the array
always use unordered_map as it takes least amount of time and space, except
for the edge case, in which you should use map if time limit is exceeded


