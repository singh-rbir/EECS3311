note
	description: "A maximum heap implemented using an array."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	ARRAYED_HEAP

create
	-- Select command `make` to be the only constructor of the current class.
	make

feature -- Representation of an array-based heap

		-- Do not modify any of these attributes.
		-- Your implementation of heap features must make use of these attributes when appropriate.

	count: INTEGER
			-- number of keys stored in the heap

	max_capacity: INTEGER
			-- maximum number of keys that can be stored in the heap

	array: ARRAY [INTEGER]
			-- array representation of the heap

feature -- Constructor

	make (a: ARRAY [INTEGER]; n: INTEGER)
			-- Create a heap from an unsorted array `a`, with maximum capacity `n`.
			-- See all invariants which must be established by this constructor.

		require
			enough_capacity:
					-- TODO: What's the relation between size of `a` and `n`?
				n >= a.count
			all_positive:
					-- TODO: All keys to be added to the heap should be strictly positive.
				across 1 |..| a.count is i all a [i] >= 0 end
			no_duplicates:
					-- TODO: No duplicates of keys are to be added to the heap.
				across a.lower |..| (a.count - 1) is i some across (i + 1) |..| a.count is j all a [i] /= a [j] end end
		local
			m: INTEGER
		do
				-- TODO: Initialize `array` such that it represents a binary tree
				-- satisfying the maximum heap property.
				-- Be sure to initialize `max_capacity` and `count` properly.
				-- Hint: Make use of the `heapify` command.
				-- Watch out for infinite loops!
			count := a.count
			max_capacity := n
			create array.make_filled (0, 1, n)
			from
				m := array.lower
			until
				m > a.count
			loop
				array [m] := a [m]
				m := m + 1
			end
			heapify (count // 2)
		ensure
			max_capacity_set:
					-- Completed for you. Do not modify.
				array.count = max_capacity and max_capacity = n
			heap_size_set:
					-- Completed for you. Do not modify.
				count = a.count
		end

feature -- Commands

	heapify (i: INTEGER)
			-- Starting from the node stored at index `i`,
			-- fix the heap property downwards, until an external node if necessary

		require
			valid_index:
					-- Completed for you. Do not modify.
				is_valid_index (i)
		local
			k, parent, l_child, r_child, l_index, r_index: INTEGER
		do
				-- TODO: Complete the implementation.
				-- Watch out for infinite loops!

			from
				k := i
			until
				k < 1
			loop
				parent := array [k]
				l_child := 0;
				r_child := 0

					-- setting children
				if has_left_child (k) then
					l_child := left_child_of (k)
				end
				if has_right_child (k) then
					r_child := right_child_of (k)
				end
				l_index := 2 * k
				r_index := 2 * k + 1
				print ("Code goes into the heapify loop") -- print for testing purposes only

					-- Case: Parent is smaller than both children
				if (parent < l_child and parent < r_child) then
						--find out the max of children and swap
					if l_child > r_child then
						swap (k, l_index)
						heapify (l_index) -- recursively call heapify on the subtree
					else
						swap (k, r_index)
						heapify (r_index) -- recursive
					end

						-- Case: parent is smaller than the left child, but bigger than right child
				elseif (parent < l_child and parent > r_child) then
					swap (k, l_index)
					k := k - 1

						-- Case: parent is bigger than left child but smaller than right child
				elseif (parent > l_child and parent < r_child) then
					swap (k, r_index)
					k := k - 1

						-- Final case: the parent is bigger than both the children
				else -- just move on to the next (going backwards in the heap) internal root
					k := k - 1
				end
			end
		ensure
				-- Heap property is maintained, see invariant `heap_property`.

			same_set_of_keys:
					-- TODO: old and new versions of `array` store the same set of integer keys.
					-- Hint: You may want to make use of the `is_permutation_of` query.
				is_permutation_of (old array, array)
		end

		-- Private helper method for swap procedure of 2 elements of the heap

	swap (i, j: INTEGER)
		local
			x: INTEGER
		do
			x := array [i]
			array [i] := array [j]
			array [j] := x
		end

	insert (new_key: INTEGER)
			-- Add `new_key` into the heap, if it does not exist.
		require
			non_existing_key:
					-- Completed for you. Do not modify.
				not key_exists (new_key)
		do
				-- TODO: Complete the implementation.
				-- Watch out for infinite loops!
			if not key_exists (new_key) then
				array [count + 1] := new_key
				count := count + 1
				heapify (count // 2)
			end
		ensure
				-- Heap property is maintained, see invariant `heap_property`.

			size_incremented:
					-- TODO: Constraint on `count`
				count = (old count + 1)
			same_set_of_keys_except_the_new_key:
					-- TODO: Except `new_key` being just added,
					-- all other keys in the new `array` already exist in the old `array`.
				across (old array.lower) |..| count is i all key_exists ((old array) [i]) end
		end

	remove_maximum
			-- Remove the maximum key from heap, if it is not empty.
		require
			non_empty_heap:
					-- Completed for you. Do not modify.
				not is_empty
		do
				-- TODO: Complete the implementation.
				-- Hint: Make use of the `heapify` command.
				-- Watch out for infinite loops!
			swap (array.lower, count)
			array [count] := 0
			count := count - 1
			heapify (count // 2)
		ensure
				-- Heap property is maintained, see invariant `heap_property`.

			size_decremented:
					-- TODO: Constraint on `count`
				count = old count - 1
			same_set_of_keys_except_the_removed_key:
					-- TODO: Except the key being just removed,
					-- all other keys in the old `array` still exist in the new `array`.
				across (old array.lower + 1) |..| count is i all key_exists ((old array) [i]) end
		end

feature -- Auxiliary queries for writing contracts

	is_permutation_of (a1, a2: like array): BOOLEAN
			-- Do arrays `a1` and `a2` store the same set of items,
			-- though they may be arranged in different orders?
			-- e.g., <<1, 2, 3, 4>> is a permutation of <<2, 1, 4, 3>>
			-- You can assume that both `a1` and `a2` are heap representation,
			-- and they thus contain no duplicates from indices 1 to `count`, whereas
			-- there are all zeros from indices `count` + 1 to `max_capacity`.

			-- No precondition or postcondition is needed.
		local
			i, j: INTEGER
			exists: BOOLEAN
		do
				-- TODO: Complete the implementation.
			Result := true
			from
				i := a1.lower
			until
				i > a1.upper or Result = False
			loop
				exists := False
				from
					j := a2.lower
				until
					j > (a2.upper) or exists = True
				loop
					if (a1 [i] = a2 [j]) then
						exists := True
						i := i + 1
					else
						j := j + 1
					end
				end
				i := i + 1
				if exists = False then
					Result := False
				end
			end
		end

feature -- Queries related to heaps

	is_empty: BOOLEAN
			-- Does the current heap store no integer keys?

			-- No precondition or postcondition is needed.
		do
				-- TODO: Complete the implementation.
			Result := count = 0
		end

	key_exists (a_key: INTEGER): BOOLEAN
			-- Does `a_key` exist in the current heap?
		local
			i: INTEGER
			-- No precondition is needed.
		do
				-- TODO: Complete the implementation.
			from
				i := array.lower
			until
				i > count or Result = True
			loop
				Result := (array [i] = a_key)
				i := i + 1
			end
		ensure
			correct_result:
					-- TODO: Constraint on the return value `Result`
				across array.lower |..| array.upper is j some if array [j] = a_key then Result = True else Result = False end end
		end

feature -- Queries related to binary trees

	is_valid_index (i: INTEGER): BOOLEAN
			-- Does index `i` denote an existing node in the current heap?

			-- No precondition or postcondition is needed.
		do
				-- TODO: Complete the implementation.
			Result := (i <= count and i >= 1)
		end

	has_left_child (i: INTEGER): BOOLEAN
			-- Does index `i` store a node that has a left child node?

			-- No precondition or postcondition is needed.
		do
				-- TODO: Complete the implementation.
			Result := (2 * i <= count)
		end

	has_right_child (i: INTEGER): BOOLEAN
			-- Does index `i` store a node that has a right child node?

			-- No precondition or postcondition is needed.
		do
				-- TODO: Complete the implementation.
			Result := ((2 * i + 1) <= count)
		end

	has_parent (i: INTEGER): BOOLEAN
			-- Does index `i` store a node that has a parent node?

			-- No precondition or postcondition is needed.
		do
				-- TODO: Complete the implementation.
			Result := (i // 2 > 0)
		end

	left_child_of (i: INTEGER): INTEGER
			-- Left child node of what is stored at index `i`
			-- No postcondition is needed.
		require
				-- Precondition completed for you. Do not modify.
			valid_index: is_valid_index (i)
			left_child_exists: has_left_child (i)
		do
				-- TODO: Complete the implementation.
			Result := array [2 * i]
		end

	right_child_of (i: INTEGER): INTEGER
			-- Right child node of what is stored at index `i`
			-- No postcondition is needed.
		require
				-- Precondition completed for you. Do not modify.
			valid_index: is_valid_index (i)
			right_child_exists: has_right_child (i)
		do
				-- TODO: Complete the implementation.
			Result := array [2 * i + 1]
		end

	parent_of (i: INTEGER): INTEGER
			-- Parent node of what is stored at index `i`
			-- No postcondition is needed.
		require
				-- Precondition completed for you. Do not modify.
			valid_index: is_valid_index (i)
			not_root: i /= 1
		do
				-- TODO: Complete the implementation.
			Result := array [i // 2]
		end

	maximum: INTEGER
			-- Maximum of the current heap.
		require
				-- Precondition completed for you. Do not modify.
			non_empty: not is_empty
		local
			i, max: INTEGER
		do
				-- TODO: Complete the implementation.
			max := array [1]
			from
				i := array.lower
			until
				i > count
			loop
				if array [i] > max then
					max := array [i]
					i := i + 1
				else
					i := i + 1
				end
			end
			Result := max
		ensure
			correct_result:
					-- TODO: The return value `Result` is the maximum integer key.
				Result = array [1] -- as the root of the heap stores the max value of the heap
		end

	is_a_max_heap (i: INTEGER): BOOLEAN
			-- Does the subtree rooted at node stored at index `i` satisfy the maximum heap property?
		require
				-- Precondition completed for you. Do not modify.
			valid_index: is_valid_index (i)
		do
				-- TODO: Complete the implementation.
				-- NO CHILD
			if not has_left_child (i) and not has_right_child (i) then
				Result := True

					-- LEFT CHILD ONLY
			elseif has_left_child (i) and (not has_right_child (i)) then
				if array [i] > left_child_of (i) then
					Result := True
				else
					Result := False
				end

					-- BOTH LEFT AND RIGHT CHILDREN
			elseif has_left_child (i) and has_right_child (i) then
				if array [i] > left_child_of (i) and array [i] > right_child_of (i) then
					Result := True
				else
					Result := False
				end
			end
		ensure
			case_of_no_children:
					-- TODO: When index `i` denotes an external node, what happens to `Result`?
				Result = True
			case_of_two_children:
					-- TODO: When index `i` denotes an internal node with both children, what happens to `Result`?
				if has_left_child (i) and has_right_child (i) then if array [i] > left_child_of (i) and array [i] > right_child_of (i) then Result = True else Result = False end else Result = True end
			case_of_one_child:
					-- TODO: When index `i` denotes an internal node with only one child, what happens to `Result`?
				if has_left_child (i) and (not has_right_child (i)) then if array [i] > left_child_of (i) then Result = True else Result = False end else Result = True end
		end

invariant
		-- All invariants are completed for you. Do not modify this section.

	implementation_indices: array.lower = 1 and array.upper = max_capacity
	no_heap_overflow: count <= max_capacity
	no_heap_underflow: count >= 0

		-- The tree is filled up from indices 1 to `count` in the array.
		-- Indices `count` + 1 to `n` should store zeros.
		-- all stored keys are strictly positive; all unused slots store zeros
	contents_of_heap: across 1 |..| count is i all array [i] > 0 end and across (count + 1) |..| max_capacity is i all array [i] = 0 end

		-- The maximum heap property.
	heap_property: is_a_max_heap (1)

end
