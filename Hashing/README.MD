## Hashing

### hash_array.cpp
Frequency counting using a fixed-size array instead of a hash map.

**Approach:** Instead of hardcoding array size, compute `max_value` from 
the input array first, then size the frequency array to `max_value + 1`. 
This avoids wasted space and out-of-bounds errors from guessing a fixed size.

- Time: O(n + q)
- Space: O(max_value)
- Edge case handled: empty input array (n == 0)
